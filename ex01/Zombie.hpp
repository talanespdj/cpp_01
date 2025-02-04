/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:45:38 by tespandj          #+#    #+#             */
/*   Updated: 2024/12/18 19:46:22 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef Zombie_HPP
# define Zombie_HPP

#include <iostream>
#include <cstdlib>

class Zombie {
	private:
		std::string	name;
	
	public:
			Zombie();
			~Zombie();
			Zombie(std::string name);
		
		void	announce();
		void	setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
