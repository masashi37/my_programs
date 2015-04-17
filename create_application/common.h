
#pragma once

// アプリのウインドウサイズ
enum Window {
	WIDTH_PERCENTAGE = 9,
	HEIGHT_PERCENTAGE = 16,
	DOUBLE_SIZE = 45,

	WIDTH = WIDTH_PERCENTAGE * DOUBLE_SIZE,
	HEIGHT = HEIGHT_PERCENTAGE * DOUBLE_SIZE,
};

//文字の基本表示サイズ
enum logo_size{
	LOGO_WIDTH = WIDTH_PERCENTAGE * 15,
	LOGO_HEIGHT = HEIGHT_PERCENTAGE * 3,
};

//マップの数・サイズ
enum map{
	LENGTH = 13,
	WIDE = 9,
	ONE_SIZE = 45,
};

//画面の呼び名
enum{
	TITLE,
	OPTION,
	STAGE_SELECT,
	GAME,
	REZULT,
};


//描画データ(形)
struct object_show_data{

	//表示
	float x, y;
	float width, height;

};
//描画データ(画像)
struct texture_cut_data{

	//切り取り
	int cut_x, cut_y;
	int cut_width, cut_height;

};