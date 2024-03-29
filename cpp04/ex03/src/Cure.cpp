/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:52:51 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/30 18:20:55 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"

/* ************************************************************************** */
/*                                    Cure Class                              */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Cure::Cure()
: AMateria()
{
	std::cout << "Default Constructor Cure" << std::endl;
	this->_type = "cure";
}

Cure::Cure(std::string const &type)
: AMateria(type)
{
	std::cout << "Parametric Constructor Cure" << std::endl;
	this->_type = "cure"; // really need to overwrite?
}

Cure::Cure(const Cure &rhs)
{
	this->_type = rhs._type;
}

Cure & Cure::operator=(const Cure &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Destructor Cure" << std::endl;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

AMateria * Cure::clone(void) const
{
	AMateria * cure = new Cure("cure");

	return (cure);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << " \'s wounds *" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

/* ************************************************************************** */
/*                              Non-Member Functions                          */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                    Cure Class                              */
/* ************************************************************************** */
