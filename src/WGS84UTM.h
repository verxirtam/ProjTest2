/*
 * UTM.h
 *
 *  Created on: 2014/10/13
 *      Author: daisuke
 */

#ifndef UTM_H_
#define UTM_H_

#include <sstream>
#include "ProjectionDefinition.h"

namespace DK_Proj
{

class WGS84UTM: public ProjectionDefinition
{
private:
	//UTMのゾーン番号(1〜60)
	int Zone;
	//UTMの北側かどうか
	//true  北側
	//false 南側
	bool IsNorth;
public:
	virtual const char* getDefinitionString() const;
	WGS84UTM(int zone=0, bool isnorth=true);
};

}

#endif /* UTM_H_ */
