/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 12:02:28 by arouland          #+#    #+#             */
/*   Updated: 2026/07/17 16:27:14 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <map>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstddef>
#include <cctype> // std::isdigit
#include <cstdlib> // atoi

class BitcoinExchange {
    public:
        BitcoinExchange(void);
        ~BitcoinExchange(void);
        BitcoinExchange(BitcoinExchange const &src);
        BitcoinExchange& operator=(BitcoinExchange const &rhs);

        bool loadDatabase(const std::string &filename); // load.csv et charge _db;
        void processInput(const std::string &filename); // load la base input.txt

        /* DEBUG */
        void printDB() const {
            const std::map<std::string, float> database = this->_database;
            for (std::map<std::string, float>::const_iterator it = _database.begin();
            it != _database.end(); ++it)
            {
                std::cout << it->first << ":" << it->second << std::endl;
            }
        }
        /*********/
        
        /* A REMETTRE EN PRIVE */
        float getRateForDate(const std::string &date) const; // renvoie l'exchange rate pour la date, ou erreur
    private:
        std::map<std::string, float> _database;
        static std::string trim(const std::string &str);
        static bool isValidDate(const std::string &date);
};

#endif