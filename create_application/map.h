
#pragma once

#include "lib/appEnv.hpp"

#include "common.h"
#include <fstream>


class cMap{

private:

	//�摜�̖��O(��)
	enum{
		TUTORIAL,

		MAP_MAX,
	};

	std::ifstream* map_list[MAP_MAX];

	int map_id;		//�}�b�v��ID

	//�}�b�v�̐��E�T�C�Y
	enum map{
		LENGTH = 16,
		WIDE = 9,
		SIZE = 45,
	};

	int map_data[LENGTH][WIDE];	//�}�b�v�f�[�^

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