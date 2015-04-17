
#include "game.h"


cGame::cGame(){}


void cGame::updata(){

	map.loadMaps();
	map.mapTypeChange();

	chara.updata();

}

void cGame::draw(){

	map.draw();

	chara.draw();

}

int cGame::shift(){
	return 1;
}
