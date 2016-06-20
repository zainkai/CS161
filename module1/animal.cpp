/*********************************************************************
** Author: Kevin Turkington / OSU
** Date: 6/19/2016
** Description: simple program that outputs your favorite animal.
*********************************************************************/

#include <iostream>
#include <string>

//using namespace std;

/*********************************************************************
** Name: N/A (Main)
** Description: user inputs name of an animal they like, then the
** terminal prints the users input
** Inputs: faveAnimal
** Outputs: printed statment with user input
*********************************************************************/
int main()
{
	//variables
    std::string faveAnimal;

    //input and ouputs
    std::cout << "Please enter your favorite animal." << std::endl;
    std::cin >> faveAnimal;
    std::cout << "Your favorite animal is the " << faveAnimal;
    std::cout << "." << std::endl;    
    
    return 0;
}