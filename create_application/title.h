
#pragma once

#include "app.h"
#include "common.h"

class cTitle{

private:

	Texture logo;	//64 * 32

	//�^�C�g���ł̃��S
	object_show_data logo_object[2];
	texture_cut_data logo_cut_texture[2];

	Vec2f mouse_pos;	//�}�E�X�̈ʒu
	
	//������₷�����邽��
	enum red{
		RED,
		WHITE,
	};
	int writing_red[2];	//������Ԃɕς���
	

public:

	cTitle();

	void updata();
	void draw();
	int shift(int);
};