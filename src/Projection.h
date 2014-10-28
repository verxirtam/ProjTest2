/*
 * Projection.h
 *
 *  Created on: 2014/10/15
 *      Author: daisuke
 */

#ifndef PROJECTION_H_
#define PROJECTION_H_

#include <proj_api.h>
#include <stdexcept>
#include <string>

#include "ProjectionDefinition.h"

namespace DK_Proj
{

class Projection
{
private:
	//プロジェクションの実体
	projPJ ProjectionBody;
	//プロジェクションの定義文字列
	std::string DefinitionString;

	//コンストラクタのベースとなる関数
	void init(std::string defstr);

	//コンストラクタ
	Projection(std::string defstr)
	{
		init(defstr);
	}

public:
	//コンストラクタ
	Projection(ProjectionDefinition const & coord)
	{
		init(coord.getDefinitionString());
	}
	//コピーコンストラクタ
	Projection(Projection& proj)
	{
		//定義文字列で初期化
		init(proj.DefinitionString);
	}
	//コピー代入演算子
	Projection& operator=(Projection& proj)
	{
		//自己代入チェック
		if (this == &proj)
		{
			return *this;
		}
		//リソース開放
		this->~Projection();
		//引数で初期化
		this->init(proj.DefinitionString);
		//自身の参照を返却
		return *this;
	}
	//デストラクタ
	virtual ~Projection()
	{
		pj_free(this->ProjectionBody);
	}
	//プロジェクションを取得する
	projPJ get()
	{
		return this->ProjectionBody;
	}

};

}

#endif /* PROJECTION_H_ */
