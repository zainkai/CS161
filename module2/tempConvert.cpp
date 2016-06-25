/*********************************************************************
** Author: Kevin Turkington / OSU
** Date: 6/24/2016
** Description: converts celcius to fahrenheit
*********************************************************************/

#include <iostream>
#include <string>

using namespace std;

/*********************************************************************
** Name: N/A (Main)
** Description: takes in a float for celcius and converts that number into
** into fahrenheit.
** Inputs: celcius
** Outputs: fahrenheit
*********************************************************************/
int main()
{
    //variables
    float celcius,fahrenheit;

    //input statments for user
    cout << "Please enter a Celsius temperature." << endl;
    cin >> celcius;

    //logic
    fahrenheit = celcius * 9 / 5 +32;

    //output conversion
    cout << "The equivalent Fahrenheit temperature is:" << endl;
    cout <<fahrenheit << endl;
    
    return 0;
}