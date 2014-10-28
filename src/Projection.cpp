/*
 * Projection.cpp
 *
 *  Created on: 2014/10/15
 *      Author: daisuke
 */

#include "Projection.h"

namespace DK_Proj
{

void Projection::init(std::string defstr)
{
	this->DefinitionString = defstr;
	this->ProjectionBody = pj_init_plus(DefinitionString.c_str());

	if (!(this->ProjectionBody))
	{
		throw std::runtime_error("error on pj_init_plus().");
	}
}

}
