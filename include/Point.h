#ifndef POINT_H
#define POINT_H

#include <stdint.h>
#include <iostream>

class Point
{
    public:
        Point();
        Point(int16_t altitudeIn);
        virtual ~Point();
        Point(const Point& other);
        setAltitude(int16_t a);

    protected:

    private:
        int16_t altitude;
};

#endif // POINT_H
