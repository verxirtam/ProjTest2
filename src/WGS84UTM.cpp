/*
 * UTM.cpp
 *
 *  Created on: 2014/10/13
 *      Author: daisuke
 */

#include "WGS84UTM.h"
#include <iomanip>

namespace DK_Proj
{

const char* WGS84UTM::getDefinitionString() const
{
	//結果格納用文字列ストリーム
	std::ostringstream ssresult;

	//UTMを表す文字列を作成
	//+init=epsg:32NMM
	//N=6 UTMの北側(IsNorth=true )の場合
	//N=7 UTMの南側(IsNorth=false)の場合
	//MM  UTMのゾーン番号(1〜60)

	ssresult<<"+init=epsg:32";
	if(IsNorth)
	{
		ssresult<<"6";
	}
	else
	{
		ssresult<<"7";
	}
	ssresult<<std::setfill('0')<<std::setw(2)<<Zone;
	return ssresult.str().c_str();

}

//コンストラクタ
//N=6 UTMの北側(IsNorth=true )の場合
//N=7 UTMの南側(IsNorth=false)の場合
//zone  UTMのゾーン番号(1〜60)
//      1〜60以外の場合は60の剰余をとって1〜60の範囲にする
WGS84UTM::WGS84UTM(int zone, bool isnorth):Zone(zone),IsNorth((isnorth%60==0)?60:(isnorth%60))
{
}


}
