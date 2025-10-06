/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:41:50 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/06 16:06:00 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.h"

class Point
{
	private:
		Fixed x;
		Fixed y;
	public:
		Point();
		~Point();
		Point(const Point &point);
		Point(const float x, const float y);
		Point &operator=(Point &point);
		Fixed getX();
		Fixed getY();
};

std::ostream &operator<<(std::ostream &out, const Point &point);
