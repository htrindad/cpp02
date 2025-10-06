/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:48:41 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/06 17:50:40 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

// CDO
Point::Point() : x(Fixed(0)), y(Fixed(0)) {};
Point::~Point() {};
Point::Point(const float x, const float y) : this->x(Fixed(x)), this->y(Fixed(y)) {}; // Need to explicitly state "this" so that the compiler know the difference
Point &Point::operator=(Point const &point)
{
	~Point();
	new(this) Point(point.x.toFloat(), point.y.toFloat()); // destroying and recreating the point
	return *this;
}
Point::Point(Point const &point) { *this = point; }

// Methods

Fixed Point::getX() const { return x.getFloat(); }
Fixed Point::getY() const { return y.getFloat(); }

std::ostream &operator<<(std::ostream &out, const Point &point)
{
	out << point.getX();
	return out;
}
