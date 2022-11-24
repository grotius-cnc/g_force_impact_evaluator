#ifndef ARCPOINTS_H
#define ARCPOINTS_H

#include <common.h>

struct ARC {
    std::vector<XYZ> pntVec;
    float radius=0;
    float diameter=0;
    float arcLenght=0;
    float arcAngleRad=0; //! Radians
    float circumFence=0;
    bool arcAngleNegative=0; //! When sign of the angle < 0, set true.
    XYZ center;
    XYZ pointOnArcAxis;
    float lenghtLineA=0, lenghtLineB=0, lenghtLineAB=0;
    float gforce=0; //! [g]
    float rev_sec=0;
};

class arcpoints {
public:
    arcpoints(){}

    ARC getArc(Eigen::Vector3d p1, Eigen::Vector3d p2, Eigen::Vector3d p3, float division);

private:
    XYZ rotatePointAroundLine(XYZ thePointToRotate,double theta,XYZ theLineP1,XYZ theLineP2);
};

#endif
