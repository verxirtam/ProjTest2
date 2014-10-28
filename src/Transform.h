/*
 * Transform.h
 *
 *  Created on: 2014/10/13
 *      Author: daisuke
 */

#ifndef TRANSFORM_H_
#define TRANSFORM_H_

#include <proj_api.h>
#include "ProjectionDefinition.h"

#include "Projection.h"

namespace DK_Proj
{

class Transform
{
private:
	Projection From;
	Projection To;
public:
	Transform(const ProjectionDefinition& from, const ProjectionDefinition & to) :
			From(from), To(to)
	{
	}
	virtual ~Transform();
	void transform(double& x, double& y, double& z);
	void transform(const double& x, const double& y, const double& z,
			double& tx, double& ty, double& tz);
};

}

#endif /* TRANSFORM_H_ */
