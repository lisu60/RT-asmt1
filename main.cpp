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
    Vector2d movement(3, -5);
    std::cout<<"original triangle:"<<std::endl;
    GeoUtils::printElement(triangle);
    std::cout<<"movement vector:"<<std::endl<<movement<<std::endl;
    std::cout<<"moved triangle:"<<std::endl;
    GeoUtils::printElement(GeoUtils::move(movement, triangle));
    return 0;
}