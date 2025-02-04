/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 02:36:58 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/04 02:36:59 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanB.hpp"

HumanB::HumanB(std::string data) {
	name = data;
	wpn = NULL;
};

HumanB::~HumanB() {
};

void	HumanB::setWeapon(Weapon &wpn_data) {
	*wpn = wpn_data;
}

void	HumanB::attack() {
	std::string	data;

	if (!wpn)
		std::cout << name << " attacks with their " << "crude spiked club" << std::endl;
	else
	{
		data = wpn->getType();
		std::cout << name << " attacks with their " << data << std::endl;
	}
}


