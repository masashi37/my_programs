
#pragma once

#include "app.h"
#include "map.h"

class cCharaMove :public cMap{

private:

	const float velocity = 2.0f;	//キャラの速度

	//向き
	enum direction{
		RIGHT, LEFT, UP, DOWN, NO_MOVE
	};
	//0：右 1：上 2：左 3：下
	int chara_direction;


public:

	cCharaMove();

	void move(float&, float&);
	void moveCancel(float&, float&);
	//壁に着く関数
	void wallAdsorb();
};