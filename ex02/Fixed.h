/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:42:09 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/02 17:52:49 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
#include <string>
#include <limits.h>

class Fixed
{
	private:
		int _fixed;
		static const int _fract = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &ref);
		Fixed(const int par);
		Fixed(const float par);
		Fixed &operator=(const Fixed &ref) const;
		Fixed operator+(const Fixed &ref) const;
		Fixed operator-(const Fixed &ref) const;
		Fixed operator*(const Fixed &ref) const;
		Fixed operator/(const Fixed &ref) const;
		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int n);
		Fixed operator--(int n);
		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;
		static Fixed &min(const Fixed &ref1, const Fixed &ref2);
		static Fixed &max(const Fixed &ref1, const Fixed &ref2);
		static Fixed &min(Fixed &ref1, Fixed &ref2);
		static Fixed &max(Fixed &ref1, Fixed &ref2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
