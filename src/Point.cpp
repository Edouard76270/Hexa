#include "Point.h"

Point::Point()
{
    //ctor
    altitude = 0;
}

Point::Point(int16_t altitudeIn)
{
    //ctor
    altitude = altitudeIn;
}

Point::~Point()
{
    //dtor
}

Point::setAltitude(int16_t a)
{
    altitude = a;
}

Point::Point(const Point& other)
{
    //copy ctor
}
