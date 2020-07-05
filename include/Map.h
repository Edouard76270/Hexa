#ifndef MAP_H
#define MAP_H

#include <stdint.h>
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

#include "Position.h"
#include "Point.h"
#include "Hexa.h"

class Map
{
    public:
        Map();
        virtual ~Map();
//        Hexa getHexa(uint64_t nb);
//        void generateMap(uint64_t sz, Hexa* start);
//        virtual void Update(const Observable* observable) const ;

        void AddObs(Hexa* obs);
        void DelObs(Hexa* obs);

    protected:
    private:
        Hexa carte[1][1];
};


class Observable
{
    Map* carte;

    public:
        void AddObs(Map* obs);
        void DelObs(Map* obs);

        virtual ~Observable();
    protected:
        void Notify(void);

};

#endif // MAP_H
