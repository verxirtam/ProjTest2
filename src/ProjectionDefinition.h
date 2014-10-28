/*
 * CoordinateSystem.h
 *
 *  Created on: 2014/10/13
 *      Author: daisuke
 */

#ifndef PROJECTIONDEFINITION_H_
#define PROJECTIONDEFINITION_H_

namespace DK_Proj
{

class ProjectionDefinition
{
public:
	virtual const char* getDefinitionString() const =0;
	virtual ~ProjectionDefinition(){};
};


}


#endif /* ProjectionDefinition_H_ */
