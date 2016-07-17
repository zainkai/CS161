/*******************************************
** Author: Kevin Turkington
** 7/14/16
** Description: class for a point containing x,y coordinates
********************************************/

#include "Point.hpp"
#include <iostream>
#include <cmath>

using namespace std;


/*************************
** name: Point::Point()
** Description: defualt constructor for point object
** input: N/A
** output: point object at origin
**************************/
Point::Point()
{
    setXCoord(0.0);
    setYCoord(0.0);
}


/*************************
** name: Point::Point(double,double)
** Description: constructor with 2 parameters
** input: x and y points as type double
** output: point object
**************************/
Point::Point(double x,double y)
{
    setXCoord(x);
    setYCoord(y);
}

/*************************
** name: Point::~Point
** Description: destructor for point object
** input: N/A
** output: freed memory
**************************/
Point::~Point()
{
    //memory is freed when out of scope
}


/*************************
** name: Point::setXCoord
** Description: setting function x coordinate
** input: x 
** output: N/A
**************************/
void Point::setXCoord(double x)
{
    xCoord = x;
}


/*************************
** name: Point::setYCoord
** Description: setting function y coordinate
** input: y
** output: N/A
**************************/
void Point::setYCoord(double y)
{
    yCoord = y;
}

/*************************
** name: Point::getXCoord 
** Description: getter function for x coordinate
** input: N/A
** output: xCoord of object
**************************/
double Point::getXCoord()
{
    return xCoord;
}

/*************************
** name: Point::getYCoord
** Description: getter function for y coordinate
** input: N/A
** output: yCoord of object
**************************/
double Point::getYCoord()
{
    return yCoord;
}

/*************************
** name: Point::distanceTo
** Description: function that calculates the distance between two points
** input: end point object
** output: distance between two points
**************************/
double Point::distanceTo(Point endPoint)
{
    double startX = xCoord;
    double startY = yCoord;

    double endX = endPoint.getXCoord();
    double endY = endPoint.getYCoord();

    double distanceSquared = pow((endX - startX),2) + pow((endY - startY),2); 

    return sqrt(distanceSquared);
}


/*
int main()
{
    return 0;
}
*/
