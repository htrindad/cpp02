/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:41:36 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/02 17:55:19 by htrindad         ###   ########.fr       */
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

Fixed Fixed::operator+(const Fixed &ref) { return Fixed(ref.toFloat() + toFloat(); }
Fixed Fixed::operator-(const Fixed &ref) { return Fixed(ref.toFloat - toFloat()); }
Fixed Fixed::operator*(const Fixed &ref) { return Fixed(ref.toFloat() * toFloat()); }
Fixed Fixed::operator/(const Fixed &ref) { return Fixed(ref.toFloat() / toFloat()); }
bool Fixed::operator>(const Fixed &ref) { return toFloat() > ref.toFloat(); }
bool Fixed::operator<(const Fixed &ref) { return toFloat() < ref.toFloat(); }
bool Fixed::operator>=(const Fixed &ref) { return toFloat() >= ref.toFloat(); }
bool Fixed::operator<=(const Fixed &ref) { return toFloat() <= ref.toFloat(); }
bool Fixed::operator==(const Fixed &ref) { return toFloat() == ref.toFloat(); }
bool Fixed::operator!=(const Fixed &ref) { return toFloat() != ref.toFloat(); }

Fixed &Fixed::operator++()
{
	_fixed++;
	return *this;
}

Fixed &Fixed::operator--()
{
	_fixed--;
	return *this;
}

Fixed Fixed::operator++(int n)
{
	Fixed ref = *this;

	_fixed++;
	return ref;
}

Fixed Fixed::operator--(int n)
{
	Fixed ref = *this;

	_fixed--;
	return ref;
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

Fixed &Fixed::min(const Fixed &ref1, const Fixed &ref2) { return ref1 < ref2 ? ref1 : ref2; }
Fixed &Fixed::max(const Fixed &ref1, const Fixed &ref2) { return ref1 > ref2 ? ref1 : ref2; }
Fixed &Fixed::min(Fixed &ref1, Fixed &ref2) { return Fixed::min(ref1, ref2); }
Fixed &Fixed::max(Fixed &ref1, Fixed &ref2) { return Fixed::max(ref1, ref2); }

std::ostream &operator<<(std::ostream &out, Fixed const &fix)
{
	out << fix.toFloat();
	return out;
}
