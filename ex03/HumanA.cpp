/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 02:36:20 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/04 02:36:22 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string data, Weapon & wpn_data) : name(data), wpn(wpn_data) {
};

HumanA::~HumanA() {
};

void	HumanA::attack() {
	std::cout << name << " attacks with their " << wpn.getType() << std::endl;
}
