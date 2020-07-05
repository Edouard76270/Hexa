#include "Map.h"

Map::Map()
{
//    ctor
    nombreHexa = 0;
    carte = (Hexa *)malloc(sizeof(Hexa));
    if(carte != 0)
    {
        carte[nombreHexa] = Hexa();
        nombreHexa++;
    }
}

//Hexa Map::getHexa(uint64_t nb)
//{
//    return carte[nb];
//}
//
//void Map::generateMap(uint64_t sz, Hexa* start)
//{
//    Hexa temp = realloc(carte,sizeof(Hexa)*(nombreHexa+sz))
//    if(temp != 0)
//    {
//        carte = temp;
//        for(uint64_t i = 0; i < sz; i++)
//        {
//            carte[nombreHexa+i] = Hexa()
//        }
//    }
//}

Map::~Map()
{
    //dtor
}
