#ifndef POSITION_H
#define POSITION_H

#include <stdint.h>
#include <iostream>

class Position
{
    public:
        Position();
        Position(int64_t xIn, int64_t yIn);
        void displayPosition(void);
        virtual ~Position();

    protected:

    private:
        int64_t x;
        int64_t y;
};

#endif // POSITION_H
