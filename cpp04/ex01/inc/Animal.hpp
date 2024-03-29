/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:38:11 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/13 16:21:40 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>

/* ************************************************************************** */
/*                                  Animal Class                              */
/* ************************************************************************** */

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& rhs);
	virtual ~Animal();

	Animal& operator=(const Animal& rhs);

	virtual void makeSound(void) const;

	std::string getType(void) const;
};

#endif /* ANIMAL_H */
