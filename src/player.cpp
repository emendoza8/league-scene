#include <iostream>
#include <cmath>

#include "player.h"
#include "LEAGUE/engine.h"
#include "LEAGUE/defaults.h"

Player::Player(){
	x = 320;
	y = 240;
	x_vel = 0;
	y_vel = 0;
    totalTimeElapsed = 0;
	loadImage("../assets/HummingCoon.png");
}

Player::~Player(){

}


void Player::update(double delta) {
    double rotationSpeed = 0.5;
    double radius = 100;

    // Angle based on time to create circular motion
    double angle = rotationSpeed * totalTimeElapsed;

    // Calculate the new position for circle
    x = SCREEN_WIDTH_DEFAULT / 2 + radius * cos(angle);
    y = SCREEN_HEIGHT_DEFAULT / 2 + radius * sin(angle);

    // Updates total time elapsed
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


void Player::draw(SDL_Renderer* renderer){
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
