#ifndef __H__ENEMY__
#define __H__ENEMY__

#include "LEAGUE/common_data_structures.h"

class Enemy : public Drawable, public Updateable {
public:
    Enemy();
    ~Enemy();
    void draw(SDL_Renderer* renderer) override;
    void update(double delta) override;

private:
    int x_vel;
    int y_vel;
};

#endif
