
#include "scene.h"


cScene::cScene(){

	scene_mover = GAME;

};



void cScene::update(){
	switch (scene_mover){
	case TITLE:
		title.updata();
		break;
	case OPTION:
		option.updata();
		break;
	case STAGE_SELECT:
		break;
	case GAME:
		game.updata();
		break;
	case REZULT:
		break;
	}
}

void cScene::draw(){
	switch (scene_mover){
	case TITLE:		
		title.draw();
		break;
	case OPTION:
		option.draw();
		break;
	case STAGE_SELECT:
		break;
	case GAME:
		game.draw();
		break;
	case REZULT:
		break;
	}
}

void cScene::shift(){
	switch (scene_mover){
	case TITLE:
		scene_mover = title.shift(scene_mover);
		break;
	case OPTION:
		option.shift();
		break;
	case STAGE_SELECT:
		break;
	case GAME:
		game.shift();
		break;
	case REZULT:
		break;
	}
}