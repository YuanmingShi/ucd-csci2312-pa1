//
// Created by Yuanming on 2/6/2016.
//
#include <cmath>
#include "Point.h"

double computeArea(const Point &a, const Point &b, const Point &c)
{
    double semi, area;

    //formula for semiperimeter s=(a+b+c)/2.
    // formula for area sqrt((s(s-a)(s-b)(s-c)))
    double AB, BC, CA;

    AB = a.distanceTo(b);  //get distance from a to b
    BC = b.distanceTo(c);
    CA = c.distanceTo(a);

    semi = (AB + BC + CA) / 2.0;

    area = sqrt(semi*(semi - AB)*(semi - BC)*(semi - CA));

    return area;

}