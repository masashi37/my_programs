
#pragma once

#include "lib/appEnv.hpp"

#include "common.h"
#include <fstream>


class cMap{

private:

	//画像の名前(№)
	enum{
		TUTORIAL,

		MAP_MAX,
	};

	std::ifstream* map_list[MAP_MAX];

	int map_id;		//マップのID

	//マップの数・サイズ
	enum map{
		LENGTH = 16,
		WIDE = 9,
		SIZE = 45,
	};

	int map_data[LENGTH][WIDE];	//マップデータ

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