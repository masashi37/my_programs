
#include "charaMove.h"


cCharaMove::cCharaMove(){

	cMap::loadMaps();

}


void cCharaMove::move(float& chara_x, float& chara_y){

	chara_direction = NO_MOVE;
	if (app::app_env->isPressKey('A'))
		chara_direction = LEFT;
	if (app::app_env->isPressKey('D'))
		chara_direction = RIGHT;
	if (app::app_env->isPressKey('S'))
		chara_direction = DOWN;
	if (app::app_env->isPressKey('W'))
		chara_direction = UP;

	switch (chara_direction){
	case LEFT:
		chara_x -= velocity;
		chara_x = std::max(chara_x, -WIDTH / 2.f);
		break;
	case RIGHT:
		chara_x += velocity;
		chara_x = std::min(chara_x, WIDTH / 2.f - ONE_SIZE);
		break;
	case DOWN:
		chara_y -= velocity;
		chara_y = std::max(chara_y, -HEIGHT / 2.f);
		break;
	case UP:
		chara_y += velocity;
		chara_y = std::min(chara_y, HEIGHT / 2.f - ONE_SIZE * 4);
		break;
	}

}

void cCharaMove::moveCancel(float& chara_x, float& chara_y){

	for (int y = 0; y < LENGTH; ++y){
		for (int x = 0; x < WIDE; ++x){

			switch (chara_direction){
			case RIGHT:
				if (chara_x + ONE_SIZE > cMap::map_obj[y][x].x &&
					chara_x < cMap::map_obj[y][x].x + cMap::map_obj[y][x].width &&
					chara_y + ONE_SIZE > cMap::map_obj[y][x].y &&
					chara_y < cMap::map_obj[y][x].y + cMap::map_obj[y][x].height){

					if (cMap::map_data[y][x] == 1)
						chara_x = cMap::map_obj[y][x].x - ONE_SIZE;
				}
				break;
			case LEFT:
				if (chara_x + ONE_SIZE > cMap::map_obj[y][x].x &&
					chara_x < cMap::map_obj[y][x].x + cMap::map_obj[y][x].width &&
					chara_y + ONE_SIZE > cMap::map_obj[y][x].y &&
					chara_y < cMap::map_obj[y][x].y + cMap::map_obj[y][x].height){

					if (cMap::map_data[y][x] == 1)
						chara_x = cMap::map_obj[y][x].x + ONE_SIZE;
				}
				break;
			case UP:
				if (chara_x + ONE_SIZE > cMap::map_obj[y][x].x &&
					chara_x < cMap::map_obj[y][x].x + cMap::map_obj[y][x].width &&
					chara_y + ONE_SIZE > cMap::map_obj[y][x].y &&
					chara_y < cMap::map_obj[y][x].y + cMap::map_obj[y][x].height){

					if (cMap::map_data[y][x] == 1)
						chara_y = cMap::map_obj[y][x].y - ONE_SIZE;
				}
				break;
			case DOWN:
				if (chara_x + ONE_SIZE > cMap::map_obj[y][x].x &&
					chara_x < cMap::map_obj[y][x].x + cMap::map_obj[y][x].width &&
					chara_y + ONE_SIZE > cMap::map_obj[y][x].y &&
					chara_y < cMap::map_obj[y][x].y + cMap::map_obj[y][x].height){

					if (cMap::map_data[y][x] == 1)
						chara_y = cMap::map_obj[y][x].y + ONE_SIZE;
				}
				break;
			}

		}
	}
}

void cCharaMove::wallAdsorb(){

}