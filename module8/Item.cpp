/*******************************************
** Author: Kevin Turkington
** 7/25/16
** Description: class for item object
********************************************/

#include <string>
#include <iostream>

#include "Item.hpp"

using namespace std;

/*************************
** name: Item::Item
** Description: default constructor for Item class
** input: N/A
** output: empty Item object
**************************/
Item::Item()
{
    setName("");
    setPrice(0.00);
    setQuantity(0);
}

/*************************
** name: Item
** Description: non default constructo for Item clas with 3 parameters
** input: paramName,paramPrice,paramQuantity
** output: Item object
**************************/
Item::Item(string paramName, double paramPrice, int paramQuantity)
{
    setName(paramName);
    setPrice(paramPrice);
    setQuantity(paramQuantity);
}

/*************************
** name: ~Item
** Description: destructor for Item class 
** input: N/A
** output: unallocated memory
**************************/
Item::~Item()
{
    //deletes once out of scope
}

/*************************
** name: setName
** Description: sets the name of an item object
** input: paramName
** output: N/A
**************************/
void Item::setName(string paramName)
{
    name = paramName;
}

/*************************
** name: setPrice
** Description: sets the price of an item object
** input: paramPrice
** output: N/A
**************************/
void Item::setPrice(double paramPrice)
{
    price = paramPrice;
}

/*************************
** name: setQuantity
** Description: sets the quantity of an  item object
** input: paramQuantity
** output: N/A
**************************/
void Item::setQuantity(int paramQuantity)
{
    quantity = paramQuantity;
}

/*************************
** name: getName
** Description: returns the name of an item object
** input: N/A
** output: name
**************************/
string Item::getName()
{
    return name;
}

/*************************
** name: getPrice
** Description: returns the price of an item object
** input: N/A 
** output: price
**************************/
double Item::getPrice()
{
    return price;
}

/*************************
** name: getQuantity
** Description: returns the quantity of an item object
** input: N/A 
** output: quantity
**************************/
int Item::getQuantity()
{
    return quantity;
}