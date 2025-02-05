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
// #include ""
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>


void	SedIsForLosers(std::string filename, std::string s1, std::string s2) {

	std::ifstream	infile(filename);
	std::ofstream	stm(filename + ".replace");
	std::string	line;

	if (!stm)
		std::cout << "Le fichier n'existe pas." << std::endl;
	while (std::getline(infile, line)) {

		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
		




		}




		
	}
	
	
	
	
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		SedIsForLosers(argv[1], argv[2], argv[3]);
	else
		std::cout << "respect input rules" << std::endl;
	return (0);
}


