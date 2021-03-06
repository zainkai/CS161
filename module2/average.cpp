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
    const int loop_num = 5;

    // inital prompt for user
    cout << "Please enter five numbers." << endl;
    cin >> temp;//1
    sum +=temp;
    cin >> temp;//2
    sum +=temp;
    cin >> temp;//3
    sum +=temp;
    cin >> temp;//4
    sum +=temp;
    cin >> temp;//5
    sum +=temp;


    /* better
    //for loop to easily prompt user multiple times
    for (int i = 0; i < loop_num ;i++){
        cin >> temp;
        //summating the input together
        sum += temp;
    }
    */
    
    //outputting sum
    average = sum / loop_num;
    cout << "The average of those numbers is:" << endl << average << endl;
    return 0;
}