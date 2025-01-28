/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:44:58 by tespandj          #+#    #+#             */
/*   Updated: 2024/12/18 19:50:46 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie::Zombie() {
	return ;

};

Zombie::~Zombie() {
	std::cout << this->name << " Zombie has been destroyed" << std::endl;
	return ;

};

Zombie* zombieHorde( int N, std::string name );

// void	Zombie::announce() {
// 	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
// }


// Zombie*	newZombie( std::string name ) {
// 	Zombie	zbi;

// 	this->name = name;
// 	return (zbi);
// }

// void	randomChump( std::string name ) {
// 	Zombie zbi;

// 	this->name = name;
// 	zbi.announce();
// }