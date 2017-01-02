//
// Created by taylor on 1/2/17.
//

#include "GeoUtils.h"
#include <iostream>
#include <cmath>

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

GeoUtils::GeoElement GeoUtils::rotate(double theta, GeoElement elmt)
{
    const double PI=3.14159265;
    double rad=theta*PI/180;
    Matrix2d R;
    R<<cos(rad), -sin(rad), sin(rad), cos(rad);
    GeoElement res;
    GeoElement::iterator t;
    for(t=elmt.begin(); t!=elmt.end(); t++)
    {
        res.push_back(R*(*t));
    }
    return res;
}

GeoUtils::GeoElement GeoUtils::rotatep(double theta, Vector2d point, GeoElement elmt)
{
    return move(point, rotate(theta, move(-point, elmt)));
}
