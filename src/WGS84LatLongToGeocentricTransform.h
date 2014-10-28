/*
 * WGS84LatLongToGeocentricTransform.h
 *
 *  Created on: 2014/10/26
 *      Author: daisuke
 */

#ifndef WGS84LATLONGTOGEOCENTRICTRANSFORM_H_
#define WGS84LATLONGTOGEOCENTRICTRANSFORM_H_


#include "Transform.h"
#include "WGS84LatLong.h"
#include "WGS84Geocentric.h"

namespace DK_Proj
{

class WGS84LatLongToGeocentricTransform
{
private:
	Transform TransformBody;
public:
	WGS84LatLongToGeocentricTransform():TransformBody(WGS84LatLong(),WGS84Geocentric())
	{
	}
	virtual ~WGS84LatLongToGeocentricTransform()
	{
	}
	Transform& transform()
	{
		return TransformBody;
	}
};

} /* namespace DK_Proj */

#endif /* WGS84LATLONGTOGEOCENTRICTRANSFORM_H_ */
