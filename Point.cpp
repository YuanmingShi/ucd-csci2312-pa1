//
// Created by Yuanming on 2/5/2016.
//


#include "Point.h"
#include <cmath>


Point:: Point()     //default constructor       set x,y,z to 0
{
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

Point ::Point (double inix, double iniy, double iniz)
{
    x = inix;
    y = iniy;
    z = iniz;
}



// Mutator methods
void Point :: setX(double newX)   //get value x
{
    x = newX;
}

void Point :: setY(double newY)  //get value y
{
    y = newY;
}

void Point :: setZ(double newZ)   //get value z
{
    z = newZ;
}

// Accessor methods

double Point :: getX() const   //return value x
{
    return x;
}

double Point :: getY() const   //return value y
{
    return y;
}

double Point ::getZ() const    //return value z
{
    return z;
}

double Point :: distanceTo(const Point& other) const  //for calculate
{
    double distance;
    distance = sqrt((pow(other.getX()- x,2.0)) + (pow(other.getY() - y,2.0)) + (pow(other.getZ() - z, 2.0)));
//√((x2−x1)^2+(y2−y1)^2+(z2−z1)^2).
//The distance formula in 3-D space .
    return distance;
}