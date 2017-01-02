#include <iostream>
#include <vector>
#include <Eigen/Dense>
#include "GeoUtils.h"
using namespace Eigen;

int main() {
    GeoUtils::GeoElement line;
    line.push_back(Vector2d(2, 5));
    line.push_back(Vector2d(3, 1));
    Vector2d movement(3, -5);
    std::cout<<"original line:"<<std::endl;
    GeoUtils::printElement(line);
    std::cout<<"movement vector:"<<std::endl<<movement<<std::endl;
    std::cout<<"moved line:"<<std::endl;
    GeoUtils::printElement(GeoUtils::move(movement, line));
    return 0;
}