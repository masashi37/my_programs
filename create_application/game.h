
#pragma once

#include "common.h"
#include "map.h"


class cGame{

private:

	//�N���X
	cMap map;

public:

	cGame();

	void updata();
	void draw();
	int shift();
};