
#pragma once

#include "app.h"
#include "map.h"

class cCharaMove :public cMap{

private:

	const float velocity = 2.0f;	//�L�����̑��x

	//����
	enum direction{
		RIGHT, LEFT, UP, DOWN, NO_MOVE
	};
	//0�F�E 1�F�� 2�F�� 3�F��
	int chara_direction;


public:

	cCharaMove();

	void move(float&, float&);
	void moveCancel(float&, float&);
	//�ǂɒ����֐�
	void wallAdsorb();
};