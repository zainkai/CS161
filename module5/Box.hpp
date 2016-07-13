/*************************************************************
** Author: Kevin Turkington
** 7/12/16
** Description: Header file for Box object program.
**************************************************************/


#ifndef BOX_HPP
#define BOX_HPP

class Box{
	private:
		double width;
		double length;
		double height;
	public:
		//constructors
		Box();
		Box(double,double,double);

		//Destructor
		~Box();

		//getter
		double getWidth();
		double getLength();
		double getHeight();

		//setter
		void setWidth(double);
		void setLength(double);
		void setHeight(double);

		//functions
		double getVolume();
		double getSurfaceArea();
};

#endif