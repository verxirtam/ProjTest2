/*
 * WGS84Geocentric.cpp
 *
 *  Created on: 2014/10/26
 *      Author: daisuke
 */

#include "WGS84Geocentric.h"

namespace DK_Proj
{

WGS84Geocentric::WGS84Geocentric()
	:CustomProjectionDefinition("+proj=geocent +datum=WGS84 +units=m")
{
}

WGS84Geocentric::~WGS84Geocentric()
{
}

} /* namespace DK_Proj */
