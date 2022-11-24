# gforce 3d

Math example how to calculate g force for a object on a path.

When to use :

    1.  As check algoritme, to give machine- or automotive factory's a 
        insight when a critical g-force can occurs. 

# ![screen](https://github.com/grotius-cnc/arc_points_3d/blob/main/screen.jpg)

The gforce class can be used in your project.
Here is included a visualisation with opencascade to verify
the output.

    gforce.h
    arcpoints.h
    arcpoints.cpp

    input : point 1, (path startpoint)
            point 2, (path waypoint, or impact point)
            point 3. (path endpoint)
            
    output : g-force [g]

The code in a nutshell:

    1.  Here a rotational g-force is approximately being calculated by providing 3 input points.
    2.  The 3 input points are processed to retrieve the center of gravity point, or arc center point.
    3.  The linear speed of motion is converted into a rpm, retrieved by the 3 input points, wich has given us the
        center point, radius, diameter, circumfence in 3d space.
    4.  When the path as arc "checkbox" is selected, you can see there is not really a difference in output.
        This is problably because the radius and speed stay the same. Arc fragmenation does not realy downplay the 
        g-force output.

Notes:

    1.  The opencascade can installed by sudo apt...
        Or get it from https://github.com/grotius-cnc/OCCT/releases/tag/amd64-precompiled

    2.  For the vector3d the Eigen library is used.

To build the project, in project top dir:

    mkdir build
    cd build
    cmake ..
    make

To open or edit the project in qt:

    Open the cmakelist.txt in qt editor. 

       





