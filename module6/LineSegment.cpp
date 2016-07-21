/*******************************************
** Author: Kevin Turkington
** 7/14/16
** Description: class for a line that can calculate the 
** legnth and slope
********************************************/

#include "LineSegment.hpp"
#include "Point.hpp"
#include <iostream>

using namespace std;

/*************************
** name: LineSegment::LineSegment()
** Description: default constructor for linesegment
** input: N/A
** output: LineSegment object
**************************/
LineSegment::LineSegment()
{
    Point point1 = Point();
    Point point2 = Point();

    setEnd1(point1);
    setEnd2(point2);
}

/*************************
** name: LineSegment::LineSegment(point,point)
** Description: Constructor for linesegment object with 2 point params.
** input: Point1, point2
** output: LineSegment object
**************************/
LineSegment::LineSegment(Point start,Point end)
{
    endOne = start;
    endTwo = end;
}

/*************************
** name: LineSegment::~LineSegment()
** Description:  destructor for linesegment object
** input: N/A
** output: freed memory
**************************/
LineSegment::~LineSegment()
{
    //freed once out of scope.
}

/*************************
** name: LineSegment::setEnd1()
** Description: sets one of the point objects for the linesegment
** input: point object end 1
** output: N/A
**************************/
void LineSegment::setEnd1(Point one)
{
    endOne = one;
}

/*************************
** name: LineSegment::setEnd2()
** Description: sets one of the point objects for the linesegment
** input: point object end 2
** output: N/A
**************************/
void LineSegment::setEnd2(Point two)
{
    endTwo = two;
}

/*************************
** name: LineSegment::getEnd1()
** Description: returns one of the points in linesegment
** input: N/A
** output: Point Object for end1
**************************/
Point LineSegment::getEnd1()
{
    return endOne;
}

/*************************
** name: LineSegment::getEnd2()
** Description: returns one of the points in linesegment
** input: N/A
** output: Point Object for end2
**************************/
Point LineSegment::getEnd2()
{
    return endTwo;
}

/*************************
** name: LineSegment::legnth()
** Description: returns the length between two points
** input: N/A
** output: length double
**************************/
double LineSegment::length()
{
    return (endOne.distanceTo(endTwo));
}

/*************************
** name: LineSegment::slope()
** Description: returns the slope between two points
** input: N/A
** output: slope double
**************************/
double LineSegment::slope()
{
    double startX = endOne.getXCoord();
    double startY = endOne.getYCoord();

    double endX = endTwo.getXCoord();
    double endY = endTwo.getYCoord();

    double slope = (endY - startY)/(endX - startX);

    return slope;
}

/*
int main()
{
    Point p1(-1.5, 0.0);
    Point p2(1.5, 4.0);
    double dist = p1.distanceTo(p2);

    LineSegment ls1(p1, p2);
    double length = ls1.length();
    double slope = ls1.slope();

    cout << length << endl;
    cout << slope << endl;
    

    return 0;
}
*/