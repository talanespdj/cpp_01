/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 01:15:47 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/04 01:14:39 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <cstring>
#include <unistd.h>

int	main(void)
{
	Zombie	*zbi = NULL;

	zbi = zombieHorde(10, "je suis talan");
	for(int x = 0; x < 10; ++x) {
		zbi[x].announce();
	}
	delete [] zbi;
	return (0);
}
