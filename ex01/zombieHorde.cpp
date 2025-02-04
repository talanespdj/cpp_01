/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zonbieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 01:04:25 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/04 01:04:37 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zbi = new Zombie[N];

	for (int i = 0; i < N; ++i) {
		zbi[i].setName(name);
	}
	return (zbi);
}