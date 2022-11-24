#ifndef COMMON_H
#define COMMON_H

//! eigen
#include <vector>
#include <iostream>
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Geometry>
using namespace Eigen;

//! Make conversion's easy:
#define toRadians M_PI/180.0
#define toDegrees (180.0/M_PI)

typedef struct {
    double x,y,z;
} XYZ;

#endif
