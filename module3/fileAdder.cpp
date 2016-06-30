/*********************************************************************
** Author: Kevin Turkington / OSU
** Date: 6/29/2016
** Description: takes in an input file then outputs the file sum to sum.txt
*********************************************************************/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;//makes my life easier

/*********************************************************************
** Name: N/A (Main)
** Description: takes in an input file then outputs the file sum to sum.txt
** Inputs: input document name
** Outputs: sum.txt
*********************************************************************/
int main()
{   
    string inputFileName;
    ifstream inputFile;
    ofstream outputFile;
    int sum,temp;

    cout << "What is the name of your file?: ";
    cin >> inputFileName;

    //preparing files
    inputFile.open(inputFileName.c_str());
    outputFile.open("sum.txt");

    if(inputFile.is_open() && outputFile.is_open())
    {
        while(!inputFile.eof())//interates through all lines till ending charater of file.
        {
            inputFile >> temp;
            sum += temp;
        }
        outputFile << sum;

        inputFile.close();
        outputFile.close();
    }
    else
    {
        cout << "Could not access file." << endl;
    }

    return 0;
}