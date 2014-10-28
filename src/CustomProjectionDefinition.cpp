/*
 * CustomProjectionDefinition.cpp
 *
 *  Created on: 2014/10/26
 *      Author: daisuke
 */

#include "CustomProjectionDefinition.h"

namespace DK_Proj
{

CustomProjectionDefinition::CustomProjectionDefinition(const char* projstring):ProjString(projstring)
{
}

CustomProjectionDefinition::~CustomProjectionDefinition()
{
}

const char* CustomProjectionDefinition::getDefinitionString() const
{
	return ProjString;
}

} /* namespace DK_Proj */
