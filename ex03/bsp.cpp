/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:08:13 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/06 16:24:17 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool ret[3];

	ret[0] = ((a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY())) > 0;
	ret[1] = ((b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY())) > 0;
	ret[2] = ((c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY())) > 0;
	return ret[0] == ret[1] && ret[1] == ret[2];
}
