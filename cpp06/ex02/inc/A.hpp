/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 03:48:27 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/16 03:55:42 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef A_H
# define A_H

# include "Base.hpp"

/* ************************************************************************** */
/*                                    A Class                                 */
/* ************************************************************************** */

class A : public Base
{
private:
	char _type;
public:
	A();
	~A();

	char getType(void) const;
};

#endif /* A_H */
