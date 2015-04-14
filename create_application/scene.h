
#pragma once

#include "common.h"
#include "title.h"
#include "option.h"
#include "game.h"


class cScene{

private:
	
	int scene_mover;		//画面スイッチ
	
	//クラス
	cTitle title;
	cOption option;
	cGame game;

public:

	cScene();

	void update();
	void draw();
	void shift();

};


