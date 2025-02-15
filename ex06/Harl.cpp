/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 19:52:58 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/06 19:53:00 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

Harl::Harl()
{
	opt[0] = "DEBUG";
	opt[1] = "INFO";
	opt[2] = "WARNING";
	opt[3] = "ERROR";
};

Harl::~Harl() {
};

void Harl::debug() {
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger.\n I really do!" << std::endl  << std::endl;
}

void Harl::info() {
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl  << std::endl;
}

void Harl::warning() {
	std::cout << "[ WARNING ]\n" <<"I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl  << std::endl;
}

void Harl::error() {
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void	Harl::complain(std::string level) {
	void(Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; ++i) {
		if (level == opt[i]) {
			(this->*functions[i])();
			break ;
		}
	}
}
