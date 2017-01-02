#include <iostream>
#include <vector>
#include <Eigen/Dense>
#include "GeoUtils.h"
using namespace Eigen;

int main() {
    GeoUtils::GeoElement triangle;
    Vector2d v(2,-1);
    std::cout<<-v<<std::endl;
    triangle.push_back(Vector2d(2, 5));
    triangle.push_back(Vector2d(3, 1));
    triangle.push_back(Vector2d(2, 9));
    double angle=90;
    std::cout<<"original triangle:"<<std::endl;
    GeoUtils::printElement(triangle);
    std::cout<<"rotate angle: "<<angle<<std::endl;
    std::cout<<"rotated triangle:"<<std::endl;
    GeoUtils::printElement(GeoUtils::rotatep(angle, Vector2d(0, 1), triangle));
    return 0;
}