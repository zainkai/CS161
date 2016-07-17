/*******************************************
** Author: Kevin Turkington
** 7/14/16
** Description: class for a point containing x,y coordinates
********************************************/

using namespace std;

#ifndef POINT_HPP
#define POINT_HPP

class Point
{
    private:
        double xCoord;
        double yCoord;
    public:
        //constructors
        Point();
        Point(double,double);

        //destructors
        ~Point();

        //setters
        void setXCoord(double);
        void setYCoord(double);

        //getters
        double getXCoord();
        double getYCoord();

        //functions
        double distanceTo(Point);
};

#endif