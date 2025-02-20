/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 03:21:45 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/07 05:39:35 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"
#include <iostream>

void	Harl::filter(std::string level)
{
	Harl	tzy;
	int	equiv = -1;

	for(int x = 0; x < 4; ++x) {
		if (level == this->opt[x])
			equiv = x;
	}
	switch (equiv)
	{
		case 0:
			tzy.complain("DEBUG");
		case 1:
			tzy.complain("INFO");
		case 2:
			tzy.complain("WARNING");
		case 3:
			tzy.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

int	main(int argc, char **argv)
{
	Harl	tzy;

	if (argc == 1)
		return (1);
	tzy.filter(argv[1]);
 	return (0);
}
