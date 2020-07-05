#ifndef HEXA_H
#define HEXA_H

#include <stdint.h>
#include <iostream>

#include "Position.h"
#include "Point.h"

enum{
pointNord = 0,
pointNordEst,
pointSudEst,
pointSud,
pointSudOuest,
pointNordOuest,
pointCentre,
NB_MAX_POINTS
};

class Hexa
{
    public:
        Hexa();
        Hexa(int64_t x, int64_t y);
        Position getPosition();
        virtual ~Hexa();

    protected:

    private:
        Position pos;
        Point *points;
};

#endif // HEXA_H
