/*
 * LatLong.h
 *
 *  Created on: 2014/10/13
 *      Author: daisuke
 */

#ifndef LATLONG_H_
#define LATLONG_H_

#include <proj_api.h>
#include "ProjectionDefinition.h"
#include "CustomProjectionDefinition.h"


namespace DK_Proj
{

class WGS84LatLong: public CustomProjectionDefinition
{
public:
	WGS84LatLong():CustomProjectionDefinition("+init=epsg:4326")
	{
	}
};

}

#endif /* LATLONG_H_ */
