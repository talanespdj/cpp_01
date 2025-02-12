/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 01:15:47 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/04 01:24:26 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <cstring>
#include <unistd.h>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	& stringREF = str;
	

	std::cout << "\n\tMemory adresses" << std::endl;
	std::cout << "var: " << &str  << std::endl;
	std::cout << "ref: " << &stringREF  << std::endl;
	std::cout << "ptr: " << &stringPTR  << std::endl;



	std::cout << "\n\t\tValues" << std::endl;
	std::cout << "var: " << str  << std::endl;
	std::cout << "ref: " << stringREF  << std::endl;
	std::cout << "ptr: " << *stringPTR  << std::endl;
	return (0);


}
