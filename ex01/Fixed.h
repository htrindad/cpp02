/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:42:09 by htrindad          #+#    #+#             */
/*   Updated: 2025/09/19 13:51:35 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int _fixed;
		static const int _fract = 8;
	public:
		Fixed();
		Fixed(const Fixed &ref);
		Fixed(const int par);
		Fixed(const float par);
		Fixed &operator=(const Fixed &ref);
		friend std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);
		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;
};
