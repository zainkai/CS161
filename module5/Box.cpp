/*************************************************************
** Author: Kevin Turkington
** 7/12/16
** Description: Contains functionality for box object program
**************************************************************/

#include <iostream>
#include "Box.hpp"

using namespace std;

/***********************************************
** Name: Box::Box()
** Description: Default Constructor
** Inputs: N/A
** Outputs: object
************************************************/
Box::Box()
{
	width = 1.0;
	length = 1.0;
	height = 1.0;
}

/***********************************************
** Name: Box::Box()
** Description: constructor for 3 params
** Inputs: N/A
** Outputs: object
************************************************/
Box::Box(double w,double l, double h)
{
	width = w;
	length = l;
	height = h;
}

/***********************************************
** Name: Box::~Box()
** Description: Destructor
** Inputs: N/A
** Outputs: N/A
************************************************/
Box::~Box()
{
	//unallocated anyways when out of scope.
}

/***********************************************
** Name: Box::getWidth()
** Description: returns width of object
** Inputs: N/A
** Outputs: width
************************************************/
double Box::getWidth()
{
	return width;
}

/***********************************************
** Name: Box::getLength()
** Description: returns Length of object
** Inputs: N/A
** Outputs: Length
************************************************/
double Box::getLength()
{
	return length;
}

/***********************************************
** Name: Box::getHeight()
** Description: returns Height of object
** Inputs: N/A
** Outputs: Height
************************************************/
double Box::getHeight()
{
	return height;
}

/***********************************************
** Name: Box::setWidth()
** Description: sets width of object
** Inputs: width
** Outputs: N/A
************************************************/
void Box::setWidth(double w)
{
	width = w;
}

/***********************************************
** Name: Box::setLength()
** Description: sets length of object
** Inputs: Lengh
** Outputs: N/A
************************************************/
void Box::setLength(double l)
{
	length = l;
}

/***********************************************
** Name: Box::setHeight()
** Description: sets Height of object
** Inputs: height
** Outputs: N/A
************************************************/
void Box::setHeight(double h)
{
	height = h;
}

/***********************************************
** Name: Box::getVolume()
** Description: gets object voljume
** Inputs: N/A
** Outputs: Volume
************************************************/
double Box::getVolume()
{
	return (width * length * height);
}


/***********************************************
** Name: Box::getSurfaceArea()
** Description: gets object surface area
** Inputs: N/A
** Outputs: surface area
************************************************/
double Box::getSurfaceArea()
{
	double widLen = (width * length);
	double widHei = (width * height);
	double lenHei = (length * height);

	double math = 2*(widLen + widHei + lenHei);
	return math;
}

/*
int main()
{
	Box box1(2.4, 7.1, 5.0);
	Box box2;
	double volume1 = box1.getVolume();
	double surfaceArea1 = box1.getSurfaceArea();
	double volume2 = box2.getVolume();
	double surfaceArea2 = box2.getSurfaceArea();

	cout << volume1 << endl;
	cout << volume2 << endl;

	cout << surfaceArea1 << endl;
	cout << surfaceArea2 << endl;

	return 0;
}
*/