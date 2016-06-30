/*********************************************************************
** Author: Kevin Turkington / OSU
** Date: 6/29/2016
** Description:displays the min or max of a list of numbers
**  inputted by the user
*********************************************************************/

#include <iostream>
#include <string>

using namespace std;//makes my life easier

/*********************************************************************
** Name: N/A (Main)
** Description: displays the min or max of a list of numbers
**  inputted by the user
** Inputs: count(amount of inters), temp(integers from user)
** Outputs: min(minimum integer inputted), max(maximum integer inputted)
*********************************************************************/
int main()
{
    //variables
    int count,temp,max, min;
    bool firstCase = false;

    cout << "How many integers would you like to enter?" << endl;
    cin >> count;

    cout << "Please enter " << count << " integers" << endl;

    for (int i = 0; i < count; i++)
    {
    	cin >> temp;

    	if (firstCase == false)//first step of loop
    	{
    		max = temp;
    		min = temp;
    		firstCase = true;
    	}
    	else// all steps after first
    	{
    		//nested ifs
	    	if(temp > max)
	    	{
	    		max = temp;
	    	}
	    	else
	    	{
	    		min = temp;
	    	}
    	}
    }

    cout << "Min: "<< min << endl;
    cout << "Max: "<< max << endl;

    return 0;
}