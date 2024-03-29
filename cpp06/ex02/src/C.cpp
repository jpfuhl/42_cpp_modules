/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 03:57:45 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/16 18:22:45 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/C.hpp"

/* ************************************************************************** */
/*                                    C Class                                 */
/* ************************************************************************** */

/* ************************************************************************** */
/*                         Constructor and Destructor                         */
/* ************************************************************************** */

C::C()
: _type('C')
{
	std::cout << "Constructor C" << std::endl;
}

C::~C()
{}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

char C::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/*                                    C Class                                 */
/* ************************************************************************** */
