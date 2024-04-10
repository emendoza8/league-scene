#include <SDL2/SDL.h>
#include <iostream>
#include <unistd.h>

#include "LEAGUE/common_data_structures.h"
#include "LEAGUE/engine.h"
#include "player.h"
#include "enemy.h"
#include "background.h"
#include "refereeCat.h"
#include "thief.h"

int main(int argc, char** argv) {
    int opt;
    while ((opt = getopt(argc, argv, "h")) != -1) {
    }

    Scene scene;
    Engine* engine = Engine::getInstance();

    Background b;
    scene.addDrawable(b);

    Player player;
    scene.addDrawable(player);
    scene.addUpdateable(player);

    Enemy en;
    scene.addDrawable(en);
    //scene.addUpdatable(en);

    RefereeCat ref;
    scene.addDrawable(ref);
    scene.addUpdateable(ref);

    Thief thief;
	 scene.addDrawable(thief);
	 scene.addUpdateable(thief);

	 engine->core_loop(scene);

	 engine->shutdown();

    return 0;
}
