/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:41:36 by htrindad          #+#    #+#             */
/*   Updated: 2025/09/18 16:16:19 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

//CDO
Fixed::Fixed()
{
	_fixed = 0;
	std::cout << "Default constructor called\n";
}
Fixed::Fixed(const Fixed &ref)
{
	std::cout << "Copy constructor called\n";
	*this = ref;
}
Fixed::~Fixed() { std::cout << "Destructor called\n"; }
Fixed &Fixed::operator=(const Fixed &ref) 
{
	std::cout << "Copy assignment operator called\n";
	_fixed = ref.getRawBits();
	return *this;
}

//Methods
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->_fixed = raw;
}
int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return this->_fixed;
}
