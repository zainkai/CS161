/*********************************************************************
** Author: Kevin Turkington / OSU
** Date: 6/24/2016
** Description: Takes in five user integer input and displays the average of the input
*********************************************************************/

#include <iostream>
#include <string>

using namespace std;//makes my life easier

/*********************************************************************
** Name: N/A (Main)
** Description: Takes in a specified number of float inputs from the user
** and averages them all.
** Inputs: sum, individual numbers
** Outputs: average
*********************************************************************/
int main()
{
    //variables
    float sum,temp,average;
    int loop_num = 5;

    // inital prompt for user
    cout << "Please enter " << loop_num <<" numbers you want to average: " << endl;

    //for loop to easily prompt user multiple times
    for (int i = 0; i < loop_num ;i++){
        cout << i+1 << ": ";
        cin >> temp;
        //summating the input together
        sum += temp;
    }
    //outputting sum
    average = sum / loop_num;
    cout << "Your average is: " << average << endl;

    return 0;
}