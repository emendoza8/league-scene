#ifndef THIEF_H
#define THIEF_H

#include "LEAGUE/common_data_structures.h"

class Thief : public Drawable, public Updateable {
public:
    Thief();
    ~Thief();
    void draw(SDL_Renderer* renderer) override;
    void update(double delta) override;

private:
    int x_vel;
    int y_vel;
    double totalTimeElapsed;
    static constexpr double SPEED = 200;

};

#endif

