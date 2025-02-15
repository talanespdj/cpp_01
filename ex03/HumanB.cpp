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

HumanB::HumanB(std::string data) : name(data), wpn(NULL) {
	std::cout << this->name << " HumanB joined the battlefield" << std::endl;
};

HumanB::~HumanB() {
	std::cout << this->name << " HumanB died." << std::endl;
};

void	HumanB::setWeapon(Weapon &wpn_data) {
	wpn = &wpn_data;
}

void	HumanB::attack() {
	if (!wpn)
		std::cout << name << " attacks with their " << "nothing cause they dont have any weapon tdc" << std::endl;
	else
		std::cout << name << " attacks with their " << wpn->getType() << std::endl;
}