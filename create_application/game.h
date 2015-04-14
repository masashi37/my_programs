
#pragma once

#include "common.h"
#include "map.h"


class cGame{

private:

	//ƒNƒ‰ƒX
	cMap map;

public:

	cGame();

	void updata();
	void draw();
	int shift();
};