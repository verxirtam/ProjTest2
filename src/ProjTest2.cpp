//============================================================================
// Name        : ProjTest2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Transform.h"
#include "WGS84LatLong.h"
#include "WGS84UTM.h"
#include "WGS84Geocentric.h"
#include "WGS84Mercator.h"
#include "WGS84LatLongToGeocentricTransform.h"

using namespace std;
using namespace DK_Proj;

void testCopyConstructor_Transform();

int main()
{
	//WGS84経緯度
	WGS84LatLong ll;
	//UTM(ゾーン54)座標
	WGS84UTM utm54(54);
	//WGS84地心座標系
	WGS84Geocentric geocent;
	//WGS84メルカトル図法
	WGS84Mercator mercator;

	//経緯度→UTM座標変換
	//Transform t(ll,utm54);
	//経緯度→地心座標変換
	Transform t(ll, geocent);
	//WGS84LatLongToGeocentricTransform t;

	double x = 0.;
	double y = 0.;
	double z = 0.;
	for (int i = 118; i < 165; i += 4)	//for(int i=138;i<144;i++)
	{
		for (int j = 0; j < 85; j += 2)
		{
			x = ((double) i) * DEG_TO_RAD;
			y = ((double) j) * DEG_TO_RAD;
			z = 0.;
			t.transform(x, y, z);
			std::cout << i << "\t" << j << "\t" << x << "\t" << y << "\t" << z
					<< std::endl;
		}
	}

	testCopyConstructor_Transform();

	return 0;
}

void testCopyConstructor_Transform()
{
	cout << "コピーコンストラクタのテスト" << endl;
	Transform* t;
	double x = 0., y = 0., z = 0.;
	{
		cout << "スコープ開始" << endl;
		//WGS84経緯度
		WGS84LatLong ll;
		//UTM(ゾーン54)座標
		WGS84UTM utm54(54);

		t = new Transform(ll, utm54);

		t->transform(135. * DEG_TO_RAD, 45. * DEG_TO_RAD, 0. * DEG_TO_RAD, x, y,
				z);
		std::cout << x << "\t" << y << "\t" << z << std::endl;

		cout << "スコープ終了" << endl;
	}

	t->transform(135. * DEG_TO_RAD, 45. * DEG_TO_RAD, 0. * DEG_TO_RAD, x, y, z);
	std::cout << x << "\t" << y << "\t" << z << std::endl;

	Transform t1(*t);
	Transform t2 = (*t);

	delete t;
	t = NULL;

	t1.transform(135. * DEG_TO_RAD, 45. * DEG_TO_RAD, 0. * DEG_TO_RAD, x, y, z);
	std::cout << x << "\t" << y << "\t" << z << std::endl;

	cout << "コピー代入演算子のテスト" << endl;

	t2.transform(135. * DEG_TO_RAD, 45. * DEG_TO_RAD, 0. * DEG_TO_RAD, x, y, z);
	std::cout << x << "\t" << y << "\t" << z << std::endl;

}

