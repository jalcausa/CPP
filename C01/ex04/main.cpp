/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcausa <jalcausa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 11:33:15 by jalcausa          #+#    #+#             */
/*   Updated: 2025/09/07 12:15:54 by jalcausa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

static int	printError(const std::string &error)
{
	std::cerr << "Error: " << error << std::endl;
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return printError("Invalid number of arguments. Please, usage: <filename> <s1> <s2>.");
	std::string file = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;
	std::string replaceName;

	if (s1.empty())
		return printError("string to be found can't be empty.");
	std::ifstream inFile(file.c_str());
	if (!inFile.is_open())
		return printError("file couldn't be opened.");
	replaceName = file.append(".replace");
	std::ofstream outFile(replaceName.c_str());
	if (!outFile.is_open())
		return printError("file couldn't be created.");
	while (std::getline(inFile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outFile << line << std::endl;
	}
	inFile.close();
	outFile.close();
	return (0);
}