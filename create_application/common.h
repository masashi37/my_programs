
#pragma once

// �A�v���̃E�C���h�E�T�C�Y
enum Window {
	WIDTH_PERCENTAGE = 9,
	HEIGHT_PERCENTAGE = 16,
	DOUBLE_SIZE = 45,

	WIDTH = WIDTH_PERCENTAGE * DOUBLE_SIZE,
	HEIGHT = HEIGHT_PERCENTAGE * DOUBLE_SIZE,
};

//�����̊�{�\���T�C�Y
enum logo_size{
	LOGO_WIDTH = WIDTH_PERCENTAGE * 15,
	LOGO_HEIGHT = HEIGHT_PERCENTAGE * 3,
};

//�}�b�v�̐��E�T�C�Y
enum map{
	LENGTH = 13,
	WIDE = 9,
	ONE_SIZE = 45,
};

//��ʂ̌Ăі�
enum{
	TITLE,
	OPTION,
	STAGE_SELECT,
	GAME,
	REZULT,
};


//�`��f�[�^(�`)
struct object_show_data{

	//�\��
	float x, y;
	float width, height;

};
//�`��f�[�^(�摜)
struct texture_cut_data{

	//�؂���
	int cut_x, cut_y;
	int cut_width, cut_height;

};