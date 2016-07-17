/*******************************************
** Author: Kevin Turkington
** 7/14/16
** Description: class for a line that can calculate the 
** legnth and slope
********************************************/
#include "Point.hpp"

using namespace std;

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

class LineSegment
{
    private:
        Point endOne;
        Point endTwo;
    public:
        //consructors
        LineSegment();
        LineSegment(Point,Point);

        //descructors
        ~LineSegment();

        //setters
        void setEnd1(Point);
        void setEnd2(Point);

        //getters
        Point getEnd1();
        Point getEnd2();

        //functions
        double length();
        double slope();
};

#endif