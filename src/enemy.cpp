#include "enemy.h"
#include "LEAGUE/engine.h"
#include "LEAGUE/defaults.h"
#include <iostream>

Enemy::Enemy() {
    x = 150;
    y = 500;
    x_vel = 0;
    y_vel = 0;
    loadImage("../assets/ETV.png");
}

Enemy::~Enemy() {
}

void Enemy::update(double delta) {
}


void Enemy::draw(SDL_Renderer* renderer) {
    // Example draw function
    SDL_Rect dest;
    dest.x = x;
    dest.y = y;
    dest.w = rect.w;
    dest.h = rect.h;

    int result = SDL_RenderCopy(renderer, texture, NULL, &dest);
    if(result != 0){
        std::cout << SDL_GetError() << std::endl;
    }
}

