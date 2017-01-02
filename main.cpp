#include <iostream>
#include <vector>
#include <Eigen/Dense>
using namespace Eigen;

int main() {
    typedef std::vector<Vector2d> GeoElement;
    GeoElement line;
    line.push_back(Vector2d(2, 5));
    line.push_back(Vector2d(3, 1));
    std::cout<<"line:"<<std::endl<<"("<<RowVector2d(line[0])<<"), ("<<RowVector2d(line[1])<<")"<<std::endl;
    return 0;
}