#include <iostream>
#include <vector>
#include <Eigen/Dense>
#include "GeoUtils.h"
using namespace Eigen;

int main() {
    GeoUtils::GeoElement triangle;
    triangle.push_back(Vector2d(2, 5));
    triangle.push_back(Vector2d(3, 1));
    triangle.push_back(Vector2d(2, 9));
    double angle=90;
    std::cout<<"original triangle:"<<std::endl;
    GeoUtils::printElement(triangle);
    std::cout<<"rotate angle: "<<angle<<std::endl;
    std::cout<<"rotated triangle:"<<std::endl;
    GeoUtils::printElement(GeoUtils::rotate(angle, triangle));
    return 0;
}