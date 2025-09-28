/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:41:36 by htrindad          #+#    #+#             */
/*   Updated: 2025/09/28 17:21:38 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

//CDO
Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	_fixed = 0;
}

Fixed::Fixed(const Fixed &ref)
{
	std::cout << "Copy constructor called\n";
	*this = ref;
}

Fixed::Fixed(const int par)
{
	std::cout << "Fixed int constructor called\n";
	_fixed = par << _fract;
}

Fixed::Fixed(const float par)
{
	std::cout << "Fixed float constructor called\n";
	_fixed = (int)roundf(par * (1 << _fract));
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
	std::cout << "setRawBits member function calle\n";
	_fixed = raw;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return _fixed;
}

float Fixed::toFloat() const
{
	std::cout << "toFloat member function called\n";
	return (float)_fixed / (1 << _fract);
}

int Fixed::toInt() const
{
	std::cout << "toInt member function called\n";
	return _fixed >> _fract;
}

std::ostream &operator<<(std::ostream &out, Fixed const &fix)
{
	out << fix.toFloat();
	return out;
}
