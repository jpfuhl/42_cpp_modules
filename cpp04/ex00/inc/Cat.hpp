/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:38:11 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/13 15:49:19 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

/* ************************************************************************** */
/*                                    Cat Class                               */
/* ************************************************************************** */

class Cat : public Animal
{
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat& rhs);
	~Cat();

	Cat& operator=(const Cat& rhs);

	void makeSound(void) const;
};

#endif /* CAT_H */
