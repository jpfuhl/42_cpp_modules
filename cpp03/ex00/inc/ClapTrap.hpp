/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:27:58 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/12 14:53:50 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

/* ************************************************************************** */
/*                                 ClapTrap Class                             */
/* ************************************************************************** */

class ClapTrap
{
private:
	std::string _name;
	unsigned int _hitpoints;
	unsigned int _energy;
	unsigned int _damage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& rhs);
	~ClapTrap();

	ClapTrap& operator=(const ClapTrap& rhs);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName(void) const;
	unsigned int getHitpoints(void) const;
	unsigned int getEnergy(void) const;
	unsigned int getDamage(void) const;
};

std::ostream& operator<<(std::ostream& out, const ClapTrap& obj);

#endif /* CLAPTRAP_H */
