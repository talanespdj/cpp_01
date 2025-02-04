/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 02:37:07 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/04 02:37:08 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Weapon.hpp"


class HumanB {
	private:
		std::string	name;
		Weapon		*wpn;

	public:
		HumanB(std::string data);
		~HumanB();

		void	attack();
		void	setWeapon(Weapon &wpn_data);
};