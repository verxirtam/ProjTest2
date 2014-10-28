/*
 * Transform.cpp
 *
 *  Created on: 2014/10/13
 *      Author: daisuke
 */

#include "Transform.h"

namespace DK_Proj
{

Transform::~Transform()
{
}
void Transform::transform(double& x, double& y, double& z)
{
	pj_transform(From.get(), To.get(), 1, 1, &x, &y, &z);
}

void Transform::transform(const double& x, const double& y, const double& z,
		double& tx, double& ty, double& tz)
{
	tx = x;
	ty = y;
	tz = z;
	transform(tx, ty, tz);
}

}
