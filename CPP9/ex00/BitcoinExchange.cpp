/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 12:13:23 by arouland          #+#    #+#             */
/*   Updated: 2026/07/17 16:17:14 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*** CANONICAL CLASS ***/

BitcoinExchange::BitcoinExchange(void)
{
    
}

BitcoinExchange::~BitcoinExchange(void)
{
    
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
    *this = src;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
    if (this != &rhs)
    {

    }
    return *this;
}

/*** MEMBER FUNCTIONS ***/

/*
- charge data.csv dans notre _db en map
- utilise des stream -> sépare gauche de la virugle -> date en std::string
- valeur à droite -> exchange rate -> convertir en float
- met clé + valeur dans notre _db
*/
void BitcoinExchange::loadDatabase(const std::string &filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open()) 
    {
        std::cerr << "Error: cound not open file" << std::endl;
        return ;
    }

    std::string line;
    std::getline(file, line); // peut traiter la première ligne avec + de détails
    while (std::getline(file, line))
    {
        if (line.empty())
            continue;

        size_t pos = line.find(",");
        if (pos == std::string::npos) 
        {
            std::cerr << "Error: invalid format in database => " << line << std::endl;
            continue;
        }

        std::string strDate = BitcoinExchange::trim(line.substr(0, pos));
        std::string strValue = BitcoinExchange::trim(line.substr(pos + 1));

        std::stringstream ssValue(strValue);
        // >> fait la conversion vers le type de la variable
        //.eof() -> check qu'il ne reste aucun caractère parasite après le nombre.
        float value;
        if (!(ssValue >> value) || !ssValue.eof())
        {
            std::cerr << "Error: invalid float value in database => " << strValue << std::endl;
            continue;
        }
        this->_database[strDate] = value;
    }
    file.close();
}

/*
ne stock pas les valeurs du fichier d'entrée -> le fichier est traité ligne par ligne
- parser -> séparer "date | value" -> iterator
- vérifier
    - vérifier date
    - vérifier valeur
- calculer résultat
    - récupérer le taux
    - const float result = 
- afficher
*/
void BitcoinExchange::processInput(const std::string &filename)
{
    std::ifstream file (filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file" << std::endl;
        return ;
    }

    std::string line;
    std::getline(file, line);

    while (std::getline(file, line))
    {
        if (line.empty())
            continue;
        
        size_t pos = line.find('|');
        if (pos == std::string::npos)
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        std::string date = BitcoinExchange::trim(line.substr(0, pos));
        std::string strValue = BitcoinExchange::trim(line.substr(pos + 1));
        
        if (!BitcoinExchange::isValidDate(date))
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        

        std::stringstream ssValue(strValue);
        float value;
        if (!(ssValue >> value) || !ssValue.eof())
        {
            std::cerr << "Error: bad input => " << strValue << std::endl;
            continue;
        }

        if (value < 0)
        {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        if (value > 1000)
        {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }

        try {
            float rate = getRateForDate(date); // si fail -> throw error
            std::cout << date << " => " << value << " = " << (value * rate) << std::endl;
        }
        catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }
    file.close();
}

/*
- cherche la date dans _db
    - si existe : retourne son taux
    - sinon : cherche date immédiatemment inférieure
        - si existe : retourne son taux
        - sinon : erreur -> throw
*/
float BitcoinExchange::getRateForDate(const std::string &date) const
{
    std::map<std::string, float>::const_iterator it;

    it = _database.lower_bound(date);
    if (it != _database.end() && it->first == date) // date exacte
        return it->second;

    else if (it == _database.begin())
        throw std::runtime_error("Error: no earlier date found");

    return (--it)->second; // prend date immédiatemment inférieure.
}

std::string BitcoinExchange::trim(const std::string &str)
{
    size_t start = str.find_first_not_of(" ");
    size_t end = str.find_last_not_of(" ");

    if (start == std::string::npos)
        return "";
    return str.substr(start, end - start + 1);
}

bool BitcoinExchange::isValidDate(const std::string &date)
{
    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
        return false;

    for (size_t pos = 0; pos < date.length(); pos++)
    {
        if (pos == 4 || pos == 7)
            continue;
        if (!std::isdigit(date[pos]))
            return false;
    }

    int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());

    if (month < 1 || month > 12)
        return false;
        
    int day = std::atoi(date.substr(8, 2).c_str());
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        monthDays[1] = 29;
    
    if (day < 1 || day > monthDays[month - 1])
        return false;
    return true;
}