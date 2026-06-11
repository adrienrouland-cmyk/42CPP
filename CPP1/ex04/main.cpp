/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 14:13:23 by arouland          #+#    #+#             */
/*   Updated: 2026/06/11 15:26:04 by arouland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main(int argc, char **argv)
{
    std::string filename;
    std::string outfile;
    std::string line;
    std::string word;
    std::string s1;
    std::string s2;

    if (argc != 4)
    {
        std::cerr << "Wrong number of arguments" << std::endl;
        return (1);
    }
    filename = argv[1];
    std::ifstream ifs(filename);
    outfile = filename + ".replace";
    std::ofstream ofs(outfile);
    s1 = argv[2];
    s2 = argv[3];
    while (std::getline(ifs, line))
    {
        std::stringstream ss(line);
        while (ss >> word)
        {
            if (word == s1)
                ofs << s2 << " ";
            else
                ofs << word << " ";
        }
        ofs << std::endl;
    }
    ifs.close();
    ofs.close();
}
