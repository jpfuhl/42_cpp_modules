/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 01:18:31 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/05 22:00:10 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"
# include "../inc/Weapon.hpp"


/* ************************************************************************** */
/*                                HumanA Class                                */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                 Class Form                                 */
/* ************************************************************************** */

HumanA::HumanA(std::string name, Weapon& weapon)
: _name(name), _weapon(weapon)
{
	std::cout << "Constructor HumanA" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destructor HumanA" << std::endl;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

/* ************************************************************************** */
/*                                HumanA Class                                */
/* ************************************************************************** */
