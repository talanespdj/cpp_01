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
#ifndef Weapon_hpp
# define Weapon_hpp

#include <iostream>
#include <cstdlib>

class Weapon {
	private:
		std::string type;
	
	public:
		void	getType();
		void	setType();

};

#endif