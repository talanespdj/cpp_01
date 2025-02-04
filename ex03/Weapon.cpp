/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 02:37:15 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/04 02:37:17 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Weapon.hpp"

Weapon::Weapon() {
};

Weapon::~Weapon() {
};

Weapon::Weapon(std::string wpn_type) {
	type = wpn_type;
};

const std::string & Weapon::getType(void) {
	return(this->type);
}

void	Weapon::setType(std::string data) {
	type = data;
}