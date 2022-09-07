/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 01:47:46 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/07 19:37:34 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>

template<typename T>
void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
// ref as well?
template<typename T>
T min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}
// ref as well?
template<typename T>
T max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif /* WHATEVER_H */
