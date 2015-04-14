
#include "title.h"

cTitle::cTitle() :
logo("res/title/select_logo.png")
{
	logo_object[0] = { -LOGO_WIDTH / 2, -HEIGHT / 2 + 150,
		LOGO_WIDTH, LOGO_HEIGHT };
	logo_object[1] = { -LOGO_WIDTH / 2, -HEIGHT / 2 + 100,
		LOGO_WIDTH, LOGO_HEIGHT };

	logo_cut_texture[0] = { 0, 0, 64, 16 };
	logo_cut_texture[1] = { 0, 16, 64, 16 };

	writing_red[0] = WHITE;
	writing_red[1] = WHITE;
}


void cTitle::updata(){

	mouse_pos = app::app_env->mousePosition();

	for (int i = 0; i < 2; ++i){
		if (mouse_pos.x() > logo_object[i].x &&
			mouse_pos.x() < logo_object[i].x + logo_object[i].width &&
			mouse_pos.y() > logo_object[i].y &&
			mouse_pos.y() < logo_object[i].y + logo_object[i].height){
			writing_red[i] = RED;
		}
		else{ writing_red[i] = WHITE; }
	}

}

void cTitle::draw(){

	for (int i = 0; i < 2; ++i){
		drawTextureBox(
			logo_object[i].x, logo_object[i].y,
			logo_object[i].width, logo_object[i].height,
			logo_cut_texture[i].cut_x, logo_cut_texture[i].cut_y,
			logo_cut_texture[i].cut_width, logo_cut_texture[i].cut_height,
			logo, Color(1, writing_red[i], writing_red[i])
			);
	}

}

int cTitle::shift(int mover){

	mouse_pos = app::app_env->mousePosition();

	if (app::app_env->isPushButton(GLFW_MOUSE_BUTTON_LEFT)){

		if (mouse_pos.x() > logo_object[0].x &&
			mouse_pos.x() < logo_object[0].x + logo_object[0].width &&
			mouse_pos.y() > logo_object[0].y &&
			mouse_pos.y() < logo_object[0].y + logo_object[0].height){
			mover = STAGE_SELECT;
		}
		if (mouse_pos.x() > logo_object[1].x &&
			mouse_pos.x() < logo_object[1].x + logo_object[1].width &&
			mouse_pos.y() > logo_object[1].y &&
			mouse_pos.y() < logo_object[1].y + logo_object[1].height){
			mover = OPTION;
		}

	}

	return mover;

}