#include <iostream>
#include <cmath>

#include "refereeCat.h"
#include "LEAGUE/engine.h"
#include "LEAGUE/defaults.h"

RefereeCat::RefereeCat() {
    x = 400;
    y = 500;
    x_vel = 0;
    y_vel = 0;
    totalTimeElapsed = 0;
    loadImage("../assets/refereeCat.png");
}

RefereeCat::~RefereeCat() {

}

void RefereeCat::update(double delta) {
    double angular_speed = 0.5;
    double radius = 100;

    // Angle based on time to create circular motion
    double angle = angular_speed * totalTimeElapsed;

    // Calculate the new position for circle
    x = SCREEN_WIDTH_DEFAULT / 2 + radius * cos(angle);
    y = SCREEN_HEIGHT_DEFAULT / 2 + radius * sin(angle);

    // Update total time elapsed
    totalTimeElapsed += delta;

//    //Keeps object in bounds; uncomment if changing to user control
//    if (x < 0) {
//        x = 0;
//    } else if (x + rect.w > SCREEN_WIDTH_DEFAULT) {
//        x = SCREEN_WIDTH_DEFAULT - rect.w;
//    }
//    if (y < 0) {
//        y = 0;
//    } else if (y + rect.h > SCREEN_HEIGHT_DEFAULT) {
//        y = SCREEN_HEIGHT_DEFAULT - rect.h;
//    }
    
}

void RefereeCat::draw(SDL_Renderer* renderer) {
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

