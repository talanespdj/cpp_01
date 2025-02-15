/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 01:15:47 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/04 02:28:54 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <fstream>
#include <sstream>

void	SedIsForLosers(std::string filename, std::string s1, std::string s2) {

	std::string	name = filename + ".replace";
	std::ifstream	infile(filename.c_str());
	std::string	line;

	if (!infile) {
		std::cout << "File doesn't exist." << std::endl;
		return ;
	}
	std::ofstream	stm(name.c_str());
	if (!stm) {
		std::cout << "Cannot create the outfile." << std::endl;
		return ;
	}
	while (std::getline(infile, line)) {

		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			pos += s2.length();
		}
		stm << line << std::endl;
	}
	(void)s2;
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		SedIsForLosers(argv[1], argv[2], argv[3]);
	else
		std::cout << "respect input rules" << std::endl;
	return (0);
}
