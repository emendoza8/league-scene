// refereeCat.h
#ifndef REFEREECAT_H
#define REFEREECAT_H

#include "LEAGUE/common_data_structures.h"

class RefereeCat : public Drawable, public Updateable {
public:
    RefereeCat();
    ~RefereeCat();
    void draw(SDL_Renderer* renderer) override;
    void update(double delta) override;

private:
    int x_vel;
    int y_vel;
    double totalTimeElapsed;
};

#endif

