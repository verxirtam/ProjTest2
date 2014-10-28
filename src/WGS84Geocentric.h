/*
 * WGS84Geocentric.h
 *
 *  Created on: 2014/10/26
 *      Author: daisuke
 */

#ifndef WGS84GEOCENTRIC_H_
#define WGS84GEOCENTRIC_H_

#include "CustomProjectionDefinition.h"

namespace DK_Proj
{

class WGS84Geocentric: public CustomProjectionDefinition
{
public:
	WGS84Geocentric();
	virtual ~WGS84Geocentric();
};

} /* namespace DK_Proj */

#endif /* WGS84GEOCENTRIC_H_ */
