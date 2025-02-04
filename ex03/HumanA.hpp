/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 02:36:52 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/04 02:36:53 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		std::string	name;
		Weapon & wpn;
		
	public:
		HumanA(std::string data, Weapon & wpn_data);
		~HumanA();
		
		void	attack();
};

#endif