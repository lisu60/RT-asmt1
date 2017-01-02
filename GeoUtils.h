//
// Created by taylor on 1/2/17.
//

#ifndef RT_ASMT1_GEOUTILS_H
#define RT_ASMT1_GEOUTILS_H
#include <Eigen/Dense>
using namespace Eigen;

class GeoUtils {
public:

    typedef std::vector<Vector2d> GeoElement;
    static GeoElement move(Vector2d movement, GeoElement elmt);
    static void printElement(GeoElement elmt);
};


#endif //RT_ASMT1_GEOUTILS_H
