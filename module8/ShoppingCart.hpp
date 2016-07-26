/*******************************************
** Author: Kevin Turkington
** 7/25/16
** Description: header file for class for shopping cart object
********************************************/
#include <string>
#include <iostream>
#include "Item.hpp"

using namespace std;

#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP

class ShoppingCart
{
    private:
        int arrayEnd;
        Item *cart[100];
    public:
        //constructors
        ShoppingCart();

        //destructors
        ~ShoppingCart();

        //setter
        void incrementArrayEnd();

        //getter
        int getArrayEnd();

        //functions
        void addItem(Item*);
        double totalPrice();
};

#endif