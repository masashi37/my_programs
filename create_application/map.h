
#pragma once

#include "lib/appEnv.hpp"

#include "common.h"
#include <fstream>


class cMap{

protected:

	//�摜�̖��O(��)
	enum{
		TUTORIAL,

		MAP_MAX,
	};


	//�^�C�v��
	enum{
		NONE, WALL, START, GOAL,
	};

	std::ifstream* map_list[MAP_MAX];

	int map_id;		//�}�b�v��ID

	int map_data[LENGTH][WIDE];	//�}�b�v�f�[�^������

	int red[LENGTH][WIDE], green[LENGTH][WIDE], blue[LENGTH][WIDE];
	//�}�b�v�f�[�^�ύX
	//�摜�f�[�^�ł���܂ł̑�p

	object_show_data map_obj[LENGTH][WIDE];

public:

	cMap();

	void loadMaps();
	void mapTypeChange();
	void draw();

};