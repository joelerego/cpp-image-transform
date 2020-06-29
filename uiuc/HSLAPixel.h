/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {
    class HSLAPixel {
    public:
        HSLAPixel();
        HSLAPixel(double h, double s, double l);
        HSLAPixel(double h, double s, double l, double a);
        double h, s, l, a;
    };
}
