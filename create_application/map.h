
#pragma once

#include "lib/appEnv.hpp"

#include "common.h"
#include <fstream>


class cMap{

protected:

	//画像の名前(№)
	enum{
		TUTORIAL,

		MAP_MAX,
	};


	//タイプ名
	enum{
		NONE, WALL, START, GOAL,
	};

	std::ifstream* map_list[MAP_MAX];

	int map_id;		//マップのID

	int map_data[LENGTH][WIDE];	//マップデータを入れる

	int red[LENGTH][WIDE], green[LENGTH][WIDE], blue[LENGTH][WIDE];
	//マップデータ変更
	//画像データできるまでの代用

	object_show_data map_obj[LENGTH][WIDE];

public:

	cMap();

	void loadMaps();
	void mapTypeChange();
	void draw();

};