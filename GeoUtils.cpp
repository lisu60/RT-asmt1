//
// Created by taylor on 1/2/17.
//

#include "GeoUtils.h"
#include <iostream>

GeoUtils::GeoElement GeoUtils::move(Vector2d movement, GeoUtils::GeoElement elmt)
{
    GeoUtils::GeoElement res;
    GeoUtils::GeoElement::iterator t;
    for(t=elmt.begin(); t!=elmt.end(); t++)
    {
        res.push_back(*t+movement);
    }
    return res;
}

void GeoUtils::printElement(GeoElement elmt)
{
    GeoElement::iterator t;
    for(t=elmt.begin(); t!=elmt.end(); t++)
    {
        std::cout<<"("<<RowVector2d(*t)<<") ";
    }
    std::cout<<std::endl;
}

