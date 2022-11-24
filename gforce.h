#ifndef WEIGHTS_H
#define WEIGHTS_H

#include <common.h>
#include <arcpoints.h>

//! Imagine a machine moving along a programmed path at full speed.
//! When moving to 90 degree corners at full speed, the machine will break soon.
//! The idea is to create weights for every path or course change.
//!
//!     Weight = w
//!     unit [0-1]
//!     w=1.0   full speed.
//!     w=0.0   standstill.
//!
//! line to line straigth , w=1.0
//! line to line 90 degrees or > 90 , w=0.0
//!

class weights {
public:
    weights(){}

    //!
    ARC process(Eigen::Vector3d p0,Eigen::Vector3d p1, Eigen::Vector3d p2, float speed){

        ARC arc=arcpoints().getArc(p0,p1,p2,20);
        //! Representing 3 points.
        //! 1. starpoint.
        //! 2. cornerpoint. (impact point)
        //! 3. endpoint.
        //! Eigen::Vector3d p0={0,0,0},p1={100,0,0},p2={50,y,0};

        std::cout<<"radius:"<<arc.radius<<std::endl;
        std::cout<<"circumfence:"<<arc.circumFence<<std::endl;

        std::cout<<"lenght line a:"<<arc.lenghtLineA<<std::endl;
        std::cout<<"lenght line b:"<<arc.lenghtLineB<<std::endl;
        std::cout<<"arc lenght:"<<arc.arcLenght<<std::endl;

        //! Get revolutions [rev/sec].
        //! speed [mm/sec]
        float rps=speed/arc.circumFence;
        std::cout<<"rps:"<<rps<<std::endl;

        arc.rev_sec=rps;

        //! Calculate g-force.
        //! https://rechneronline.de/g-acceleration/centrifuge.php
        //! Radius [mm]
        //! Rps [rev/s]

        float a=4*(M_PI*M_PI)*arc.radius*(rps*rps);
        a*=0.001;
        std::cout<<"gforce [m/s2]:"<<a<<std::endl;
        a*=0.1;
        std::cout<<"gforce [g]:"<<a<<std::endl;

        arc.gforce=a;

        return arc;
    }
};

#endif














