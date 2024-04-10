#include <iostream>
#include <cmath>

#include "thief.h"
#include "LEAGUE/engine.h"
#include "LEAGUE/defaults.h"

Thief::Thief() {
    x = 35;
    y = 550;
    x_vel = 0;
    y_vel = 0;
    totalTimeElapsed = 0;
    loadImage("../assets/thief.png");
}

Thief::~Thief() {

}

void Thief::update(double delta) {
    if (totalTimeElapsed > 4) {
       x -= 2;
    }
	 totalTimeElapsed += delta;
}

void Thief::draw(SDL_Renderer* renderer) {
    SDL_Rect dest;
    dest.x = x;
    dest.y = y;
    dest.w = rect.w;
    dest.h = rect.h;
    int result = SDL_RenderCopy(renderer, texture, NULL, &dest);
    if (result != 0) {
        std::cout << SDL_GetError() << std::endl;
    }
}

