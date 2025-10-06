/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:26:30 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/06 17:44:00 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include "Point.h"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
	std::cout << "Testing"
		<< "\na(0, 0), b(0, 12), c(12, 0), point(1, 1): " << bsp(Point(0, 0), Point(0, 12), Point(12, 0), Point(1, 1))
		<< "\na(0, 0), b(0, 12), c(12, 0), point(0, 0): " << bsp(Point(0, 0), Point(0, 12), Point(12, 0), Point(-1, -1))
		<< "\na(0, 0), b(0, 12), c(12, 0), point(5, 5): " << bsp(Point(0, 0), Point(0, 12), Point(12, 0), Point(5, 5)) << '\n';
	return 0;
}
