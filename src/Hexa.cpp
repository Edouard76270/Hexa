#include "Hexa.h"

Hexa::Hexa()
{
    //ctor
    points = (Point *)malloc(NB_MAX_POINTS*sizeof(Point));
    for(uint8_t i=0; i<NB_MAX_POINTS; i++)
    {
        points[i].setAltitude(0);
    }
}

Hexa::Hexa(int64_t x, int64_t y)
{
    //ctor
    pos = Position(x, y);
}

Position Hexa::getPosition()
{
    return pos;
}

Hexa::~Hexa()
{
    //dtor
    free(points);
}
