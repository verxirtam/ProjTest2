/*
 * CustomProjectionDefinition.h
 *
 *  Created on: 2014/10/26
 *      Author: daisuke
 */

#ifndef CUSTOMPROJECTIONDEFINITION_H_
#define CUSTOMPROJECTIONDEFINITION_H_

#include "ProjectionDefinition.h"

namespace DK_Proj
{

class CustomProjectionDefinition: public ProjectionDefinition
{
private:
	const char* ProjString;

	//デフォルトコンストラクタの使用を制限する
	CustomProjectionDefinition():ProjString("")
	{
	}

public:
	CustomProjectionDefinition(const char* projstring);
	virtual ~CustomProjectionDefinition();
	virtual const char* getDefinitionString() const;


};

} /* namespace DK_Proj */

#endif /* CUSTOMPROJECTIONDEFINITION_H_ */
