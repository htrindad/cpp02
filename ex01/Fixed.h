/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:42:09 by htrindad          #+#    #+#             */
/*   Updated: 2025/09/28 17:20:20 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
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
		Fixed &operator=(const Fixed &ref);
		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
