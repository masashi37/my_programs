
#pragma once

#include "common.h"
#include "title.h"
#include "option.h"
#include "game.h"


class cScene{

private:
	
	int scene_mover;		//��ʃX�C�b�`
	
	//�N���X
	cTitle title;
	cOption option;
	cGame game;

public:

	cScene();

	void update();
	void draw();
	void shift();

};


