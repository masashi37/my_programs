
#pragma once


#include "common.h"
#include "map.h"
#include "charaMove.h"


class cChara : public cMap{

private:

	cCharaMove move;

protected:

	//キャラのデータ
	object_show_data chara;

	int map_type[LENGTH][WIDE];

public:

	cChara();

	void updata();
	void draw();
};