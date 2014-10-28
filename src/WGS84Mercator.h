/*
 * WGS84Mercator.h
 *
 *  Created on: 2014/10/26
 *      Author: daisuke
 */

#ifndef WGS84MERCATOR_H_
#define WGS84MERCATOR_H_

#include "CustomProjectionDefinition.h"

namespace DK_Proj
{

class WGS84Mercator: public CustomProjectionDefinition
{
public:
	WGS84Mercator():CustomProjectionDefinition("+init=epsg:3395")
	{
	}
};

} /* namespace DK_Proj */

#endif /* WGS84MERCATOR_H_ */
