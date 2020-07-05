#include "Position.h"

using namespace std;

Position::Position()
{
    //ctor
    x = 0;
    y = 0;
}

Position::Position(int64_t xIn, int64_t yIn)
{
    //ctor
    x = xIn;
    y = yIn;
}

void Position::displayPosition(void)
{
    cout << "X : " << x << " / Y : " << y << endl;
}

Position::~Position()
{
    //dtor
}
