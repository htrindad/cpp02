/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:48:41 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/06 16:05:04 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

//CDO
Point::Point() : x(0), y(0) {};
Point::~Point() {};
Point::Point(Point const &point) { *this = point; }
Point::Point(const float x, const float y) : this->x(x), this->y(y) {}; // Need to explicitly state "this" so that the compiler know the difference
Point &Point::operator=(Point const &point)
{
	~Point();
	new(this) Point(point.x.toFloat(), point.y.toFloat()); // destroying and recreating the point
	return *this;
}

// Methods

Fixed Point::getX() { return x.getFloat(); }
Fixed Point::getY() { return y.getFloat(); }

std::ostream &operator<<(std::ostream &out, const Point &point)
{
	out << point.getX();
	return out;
}
