/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 12:13:23 by arouland          #+#    #+#             */
/*   Updated: 2026/07/17 13:23:27 by arouland         ###   ########.fr       */
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

        std::string strDate = line.substr(0, pos);
        std::string strValue = line.substr(pos + 1);

        float value = std::stof(strValue); // à voir si droit d'utiliser stof ?
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
    (void)filename;
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
    (void)date;
    return 0;
}