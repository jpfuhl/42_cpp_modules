/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:36:26 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/22 01:34:17 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"
#include "../inc/Weapon.hpp"

int	main(void)
{
	std::cout << "\"Violence solves everything.\" [Katarina, League of Legends]" << std::endl;
	std::cout << std::endl;

	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club"); bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club"); jim.attack();
	}
	return (0);
}