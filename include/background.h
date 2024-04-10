#ifndef BACKGROUND_H
#define BACKGROUND_H

#include "LEAGUE/common_data_structures.h"

class Background : public Drawable {
public:
    Background();
    ~Background();
    void draw(SDL_Renderer* renderer) override;

};

#endif // BACKGROUND_H
