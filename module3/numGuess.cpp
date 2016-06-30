/*********************************************************************
** Author: Kevin Turkington / OSU
** Date: 6/29/2016
** Description: user must guess the number inputted by a different user.
*********************************************************************/

#include <iostream>
#include <string>

using namespace std;

/*********************************************************************
** Name: N/A (Main)
** Description: user must guess the number inputted by a different user.
** Inputs: guess, number
** Outputs: too low, too high
*********************************************************************/
int main()
{
    //varibles
    int number,guess;
    int count =0;

    cout << "Enter the number for the player to guess." << endl;
    cin >> number;

    cout << "Enter your guess." << endl;

    while(true)
    {
        cin >> guess;
        if (guess > number)
        {
            cout << "Too high - try again."<< endl;
            count++;
        }
        else if(guess < number)
        {
            cout << "Too low - try again." << endl;
            count++;
        }
        else
        {
            cout << "you guessed it in " << count << " tries" << endl;
            break;
        }
    }

    return 0;
}