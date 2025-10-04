/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:41:36 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/04 17:46:03 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

//CDO
Fixed::Fixed() { _fixed = 0; }

Fixed::Fixed(const Fixed &ref) { *this = ref; }

Fixed::Fixed(const int par) { _fixed = par << _fract; }

Fixed::Fixed(const float par) { _fixed = (int)roundf(par * (1 << _fract)); }

Fixed::~Fixed() {}

Fixed &Fixed::operator=(const Fixed &ref)
{
	_fixed = ref.getRawBits();
	return *this;
}

Fixed Fixed::operator+(const Fixed &ref) const { return Fixed(ref.toFloat() + toFloat()); }
Fixed Fixed::operator-(const Fixed &ref) const { return Fixed(ref.toFloat() - toFloat()); }
Fixed Fixed::operator*(const Fixed &ref) const { return Fixed(ref.toFloat() * toFloat()); }
Fixed Fixed::operator/(const Fixed &ref) const { return Fixed(ref.toFloat() / toFloat()); }
bool Fixed::operator>(const Fixed &ref) const { return toFloat() > ref.toFloat(); }
bool Fixed::operator<(const Fixed &ref) const { return toFloat() < ref.toFloat(); }
bool Fixed::operator>=(const Fixed &ref) const { return toFloat() >= ref.toFloat(); }
bool Fixed::operator<=(const Fixed &ref) const { return toFloat() <= ref.toFloat(); }
bool Fixed::operator==(const Fixed &ref) const { return toFloat() == ref.toFloat(); }
bool Fixed::operator!=(const Fixed &ref) const { return toFloat() != ref.toFloat(); }

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

Fixed Fixed::operator++(int)
{
	Fixed ref = *this;

	_fixed++;
	return ref;
}

Fixed Fixed::operator--(int)
{
	Fixed ref = *this;

	_fixed--;
	return ref;
}

//Methods
void Fixed::setRawBits(int const raw) { _fixed = raw; }
int Fixed::getRawBits() const { return _fixed; }
float Fixed::toFloat() const { return (float)_fixed / (1 << _fract); }
int Fixed::toInt() const { return _fixed >> _fract; }
const Fixed &Fixed::min(const Fixed &ref1, const Fixed &ref2) { return ref1 < ref2 ? ref1 : ref2; }
const Fixed &Fixed::max(const Fixed &ref1, const Fixed &ref2) { return ref1 > ref2 ? ref1 : ref2; }
Fixed &Fixed::min(Fixed &ref1, Fixed &ref2) { return const_cast<Fixed &>(Fixed::min(static_cast<const Fixed &>(ref1), static_cast<const Fixed &>(ref2))); }
Fixed &Fixed::max(Fixed &ref1, Fixed &ref2) { return const_cast<Fixed &>(Fixed::max(static_cast<const Fixed &>(ref1), static_cast<const Fixed &>(ref2))); }

std::ostream &operator<<(std::ostream &out, Fixed const &fix)
{
	out << fix.toFloat();
	return out;
}
