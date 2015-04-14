
#include "game.h"


cGame::cGame(){}


void cGame::updata(){

	map.loadMaps();
	map.mapTypeChange();

}

void cGame::draw(){

	map.draw();

}

int cGame::shift(){
	return 1;
}
