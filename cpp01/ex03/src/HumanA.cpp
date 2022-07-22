/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 01:18:31 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/22 18:58:16 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/HumanA.hpp"

/*	CONSTRUCTOR	*/
HumanA::HumanA( std::string name, Weapon &weapon ) : name(name), weapon(weapon) { return ; }

/*	DECONSTRUCTOR	*/
HumanA::~HumanA() { return ; }

/*	METHODS	*/
void	HumanA::attack(void) const
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
