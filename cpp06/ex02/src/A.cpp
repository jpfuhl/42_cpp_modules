/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 03:51:48 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/16 03:55:37 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/A.hpp"

/* ************************************************************************** */
/*                                    A Class                                 */
/* ************************************************************************** */

/* ************************************************************************** */
/*                         Constructor and Destructor                         */
/* ************************************************************************** */

A::A()
: _type('A')
{}

A::~A()
{}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

char A::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/*                                    A Class                                 */
/* ************************************************************************** */
