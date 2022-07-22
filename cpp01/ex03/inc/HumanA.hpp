/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:57:55 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/22 19:05:33 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include "Weapon.hpp"

/* ************************************************************************** */
/*                                HumanA Class                                */
/* ************************************************************************** */

class	HumanA
{
private:
	std::string	name;
	Weapon		&weapon;
public:
	HumanA( std::string name, Weapon &weapon );
	~HumanA();

	void	attack( void ) const;
};

#endif /* HUMANA_H */