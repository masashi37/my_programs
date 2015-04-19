
#include "chara.h"


cChara::cChara(){
	chara = {
		0, 0, ONE_SIZE, ONE_SIZE,
	};

	cMap::loadMaps();

	for (int y = 0; y < LENGTH; ++y){
		for (int x = 0; x < WIDE; ++x){
			if (cMap::map_data[y][x] == START){
				chara.x = cMap::map_obj[y][x].x;
				chara.y = cMap::map_obj[y][x].y;
			}
		}
	}
	
}


void cChara::updata(){

	move.move(chara.x,chara.y);
	move.moveCancel(chara.x, chara.y);
	move.wallAdsorb();

}

void cChara::draw(){

	drawFillBox(chara.x, chara.y, chara.width, chara.height, Color(0, 0, 1));

}

