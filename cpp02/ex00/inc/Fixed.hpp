/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:55:24 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/25 22:39:08 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_H
# define FIXED_H

/* ************************************************************************** */
/*                                 Fixed Class                                */
/* ************************************************************************** */

class	Fixed
{
private:
	int					rawBits_;
	int const static	fractionalBits_;
public:
	Fixed();
	Fixed( Fixed const &src );
	~Fixed();

	Fixed	&operator=( Fixed const &src);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif /* FIXED_H */