/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 02:37:20 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/04 02:37:22 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <cstdlib>

class Weapon {
	private:
		std::string type;
	
	public:
		Weapon();
		~Weapon();
		Weapon(std::string wpn_type);

		const std::string &getType();
		void	setType(std::string data);

};

#endif