
#pragma once

#include "common.h"
#include "map.h"
#include "chara.h"


class cGame{

private:

	//�N���X
	cMap map;
	cChara chara;

public:

	cGame();

	void updata();
	void draw();
	int shift();
};