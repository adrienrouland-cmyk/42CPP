/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouland <arouland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 14:13:23 by arouland          #+#    #+#             */
/*   Updated: 2026/06/11 19:38:29 by arouland         ###   ########.fr       */
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
    std::string s1;
    std::string s2;
    size_t pos;

    if (argc != 4)
        return (std::cerr << "Wrong number of arguments" << std::endl, 1);
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    if (s1.empty())
        return (std::cerr << "Error: the string to replace canont be empty" << std::endl, 1);
    std::ifstream ifs(filename.c_str());
    if (!ifs.is_open())
        return (std::cerr << "Cannot open " << filename << std::endl, 1);
    outfile = filename + ".replace";
    std::ofstream ofs(outfile.c_str());
    if (!ofs.is_open())
        return (std::cerr << "Cannot open " << outfile << std::endl, 1);
    while (std::getline(ifs, line))
    {
        pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        ofs << line << std::endl;
    }
    ifs.close();
    ofs.close();
}
