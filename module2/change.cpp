/*********************************************************************
** Author: Kevin Turkington / OSU
** Date: 6/24/2016
** Description:displays the min amount of change for an amount
*********************************************************************/

#include <iostream>
#include <string>

using namespace std;//makes my life easier

/*********************************************************************
** Name: N/A (Main)
** Description: takes in a int for the amount of change from a user.
** then parses the change into quarters, dimes, nickles, and pennys.
** and presents these values back to the user
** Inputs: Integer for change
** Outputs: quarters,dimes,nickles and pennys
*********************************************************************/
int main()
{
    //variables
    int quarters,dimes,nickles,pennys,money;
    
    cout << "Please enter an amount in cents less than a dollar." << endl;
    cin >> money;


    /*** Handles user error ***
    if(money < 0 || money > 99 ){
        cout << "You entered an invalid amount of money." << endl;
        return 0;
    }
    */

    //quarters
    quarters = (money / 25);
    money -= quarters * 25;

    //dimes
    dimes = (money / 10);
    money -= dimes * 10;

    //nickles
    nickles = (money / 5);
    money -= nickles * 5;

    //pennys
    pennys = money;

    //output
    cout << "Your change will be:" << endl;
    cout << "Q: " << quarters << endl;
    cout << "D: " << dimes << endl;
    cout << "N: " << nickles << endl;
    cout << "P: " << pennys << endl;

    return 0;
}