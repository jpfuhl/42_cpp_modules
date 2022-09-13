/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:38:11 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/13 17:33:38 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_H
# define DOG_H

# include "AAnimal.hpp"
# include "Brain.hpp"

/* ************************************************************************** */
/*                                    Dog Class                               */
/* ************************************************************************** */

class Dog : public AAnimal
{
private:
	Brain* _brain;
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog& rhs);
	~Dog();

	Dog& operator=(const Dog& rhs);

	void makeSound(void) const;
};

#endif /* DOG_H */
