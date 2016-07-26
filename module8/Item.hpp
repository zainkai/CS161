/*******************************************
** Author: Kevin Turkington
** 7/25/16
** Description: header file for class for item object
********************************************/
#include <string>
#include <iostream>

using namespace std;

#ifndef ITEM_HPP
#define ITEM_HPP

class Item
{
    private:
        string name;
        double price;
        int quantity;
    public:
        //constructors
        Item();
        Item(string,double,int);

        //destructors
        ~Item();

        //setters
        void setName(string);
        void setPrice(double);
        void setQuantity(int);

        //getters
        string getName();
        double getPrice();
        int getQuantity();
};

#endif