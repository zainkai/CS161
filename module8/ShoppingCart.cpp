/*******************************************
** Author: Kevin Turkington
** 7/25/16
** Description: class for shopping cart object
********************************************/

#include <iostream>
#include <string>

#include "ShoppingCart.hpp"

using namespace std;

/*************************
** name: ShoppingCart::ShoppingCart()
** Description: defualt constructor for the shopping cart class
** input: N/A
** output: ShoppingCart obj
**************************/
ShoppingCart::ShoppingCart()
{
    arrayEnd = 0;

    //explicitly makes each pointer in the car array null.
    for(int i = 0; i < 100; i++){
        cart[i] = NULL;
    }
}

/*************************
** name: ~ShoppingCart
** Description: destructor for ShoppingCart obj 
** input: N/A
** output: unallocated memory
**************************/
ShoppingCart::~ShoppingCart()
{
    //since new is not being used.
    //elements will delete once out of scope.
}


/*************************
** name: getArrayEnd()
** Description: returns the value of arrayEnd
** input: N/A
** output: int arrayEnd
**************************/
int ShoppingCart::getArrayEnd()
{
    return arrayEnd;
}

void ShoppingCart::incrementArrayEnd()
{
    arrayEnd++;
}


/*************************
** name: addItem
** Description: adds a pointer (to an item) to the cart pointer array
** then increments arrayEnd end.
** input: Item pointer
** output: filled 
**************************/
void ShoppingCart::addItem(Item *grocery)
{
    int index = getArrayEnd();

    cart[index] = grocery;
    incrementArrayEnd();
}

/*************************
** name: totalPrice
** Description: finds the total price of all the items in an array
** input: N/A
** output: totalPrice value
**************************/
double ShoppingCart::totalPrice()
{
    double cartPrice = 0;

    for(int i =0;i < getArrayEnd() ; i++){

        double price = cart[i]->getPrice();
        int quantity = cart[i]->getQuantity();

        cartPrice +=  price * quantity;
    }

    return cartPrice;
}

/*
int main()
{
    Item banana("banana",1.00,5);
    Item apple("Apple",2.00,3);
    Item kiwi("kiwi",1.11,2);

    ShoppingCart sc1;

    sc1.addItem(&banana);
    sc1.addItem(&apple);
    sc1.addItem(&kiwi);

    cout <<  sc1.totalPrice() << endl;

    return 0;
}
*/