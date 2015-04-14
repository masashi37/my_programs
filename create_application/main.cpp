
//
// チーム制作（アプリ制作）
//

#include "lib/defines.hpp"

#include "app.h"
#include "scene.h"


//shared_ptrでAppEnvを作成
std::shared_ptr<AppEnv> app::app_env;


int main() {
	// アプリウインドウの準備
	app::app_env = std::make_shared<AppEnv>(WIDTH, HEIGHT, false, true);

	cScene scene;

	while (1) {
		// ウインドウが閉じるかエスケープで終了
		if (!app::app_env->isOpen()) return false;
		if (app::app_env->isPushKey(GLFW_KEY_ESCAPE)) return false;

		scene.update();
		scene.shift();

		// 描画準備
		app::app_env->setupDraw();

		scene.draw();

		// 画面更新
		app::app_env->update();
	}

}
