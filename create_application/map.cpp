
#include "map.h"


cMap::cMap(){

	const char* text_name[MAP_MAX]{
		"res/map/tutorial.txt",
	};
	for (int index = 0; index < MAP_MAX; ++index){
		map_list[index] = new std::ifstream(text_name[index]);
	}

	map_id = TUTORIAL;

	for (int y = 0; y < LENGTH; ++y){
		for (int x = 0; x < WIDE; ++x){
			map_obj[y][x].x = -WIDTH / 2 + (ONE_SIZE * x);
			map_obj[y][x].y = HEIGHT / 2 - ONE_SIZE * 4 - (ONE_SIZE * y);
			map_obj[y][x].width = ONE_SIZE;
			map_obj[y][x].height = ONE_SIZE;
		}
	}

}


void cMap::loadMaps(){

	switch (map_id){

	case TUTORIAL:
		for (int y = 0; y < LENGTH; ++y){
			for (int x = 0; x < WIDE; ++x){
				*map_list[TUTORIAL] >> map_data[y][x];
			}
		}
		break;

	}

}

void cMap::mapTypeChange(){

	for (int y = 0; y < LENGTH; ++y){
		for (int x = 0; x < WIDE; ++x){

			switch (map_data[y][x]){
			case NONE:
				red[y][x] = 1;
				green[y][x] = 1;
				blue[y][x] = 1;
				break;
			case WALL:
				red[y][x] = 0;
				green[y][x] = 0;
				blue[y][x] = 0;
				break;
			case START:
				red[y][x] = 0;
				green[y][x] = 1;
				blue[y][x] = 1;
				break;
			case GOAL:
				red[y][x] = 1;
				green[y][x] = 0;
				blue[y][x] = 0;
				break;

			}

		}
	}

}

void cMap::draw(){

	for (int y = 0; y < LENGTH; ++y){
		for (int x = 0; x < WIDE; ++x){

			drawBox(map_obj[y][x].x, map_obj[y][x].y,
				map_obj[y][x].width, map_obj[y][x].height,
				5, Color(1, 1, 0));

			drawFillBox(map_obj[y][x].x, map_obj[y][x].y,
				map_obj[y][x].width, map_obj[y][x].height,
				Color(red[y][x], green[y][x], blue[y][x]));

		}
	}

}
