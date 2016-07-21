/*******************************************
** Author: Kevin Turkington
** 7/20/16 
** Description: finds the most common value in a array then pushs that number into 
** another array that contains the 
********************************************/


#include <iostream>
#include <vector>

using namespace std;


/*************************
** name: bubbleSort
** Description: sorts an int array using the bubbleSort
** sort algorithm.
** input: int array, array size
** output: sorted array
**************************/
int bubbleSort(int data[], int arraySize)
{
    int temp,left,right;

    for(int i=0;i < arraySize;i++){
        for(int j = 0;j < arraySize - 1; j++){
            left = data[j];
            right = data[j+1];
            if(left > right){
                temp = left;
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
    return *data;
}

/*************************
** name: printArray
** Description: prints an array to the terminal
** input: int array and array size
** output: N/A
**************************/
void printArray(int array[],int arraySize)
{
    for(int i=0;i< arraySize;i++){
        cout << array[i] << endl;
    }
    cout << endl;
}

/*************************
** name: numFrequency 
** Description: finds how many times the mode appears
** in an array
** input: int array, arraySize
** output: frequency
**************************/
int numFrequency(int data[],int arraySize)
{
    int mostFrequent = 0;
    int tempFrequent = 0;
    int numHolder = data[0];
    
    bubbleSort(data,arraySize);
    for(int i = 0;i < arraySize;i++){
        if(numHolder == data[i]){
            tempFrequent++;
        }
        else{
            numHolder = data[i];
            tempFrequent = 1;
        }
        if(tempFrequent > mostFrequent){
            mostFrequent = tempFrequent;
        }
    }
    return mostFrequent;
    
}

/*************************
** name: printVector
** Description: prints the contents of a vector
** input: int vector
** output: N/A
**************************/
void printVector(vector<int> myVector)
{
    int length = myVector.size();
    for(int i = 0; i < length;i++){
        cout << myVector[i] << endl;
    }
}

/*************************
** name: findMode
** Description: finds all the modes with the same
** frequency in an array
** input: int array, array Size
** output: int vector
**************************/
vector<int> findMode(int data[],int arraySize)
{
    vector<int> modeVector;
    int tempFrequency = 0;
    int frequency = numFrequency(data,arraySize);
    int numHolder = data[0];

    bubbleSort(data,arraySize);

    for(int i = 0;i < arraySize;i++){
        if(numHolder == data[i]){
            tempFrequency++;
        }
        else{
            numHolder = data[i];
            tempFrequency = 1;
        }
        if(tempFrequency == frequency){
            tempFrequency = 1;
            modeVector.push_back(numHolder);
        }
    }
    return modeVector;
}

/*
int main()
{
    int dataSet1[3] = {9,4,5};
    int dataSet2[10] = {2,2,5,5,7,7,0,0,4,4};
    int dataSet3[3] = {1,3,3};
    int dataSet4[6] = {3,3,3,8,8,8};
    int dataSet5[1] = {99};
    int dataSet6[4] = {-1,-1,-2,5};

    cout << "Vector1" << endl;
    vector<int> Vector1 = findMode(dataSet1,3);
    printVector(Vector1);
    cout << endl;

    cout << "Vector2" << endl;
    vector<int> Vector2 = findMode(dataSet2,10);
    printVector(Vector2);
    cout << endl;

    cout << "Vector3" << endl;
    vector<int> Vector3 = findMode(dataSet3,3);
    printVector(Vector3);
    cout << endl;

    cout << "Vector4" << endl;
    vector<int> Vector4 = findMode(dataSet4,6);
    printVector(Vector4);
    cout << endl;

    cout << "Vector5" << endl;
    vector<int> Vector5 = findMode(dataSet5,1);
    printVector(Vector5);
    cout << endl;

    cout << "Vector6" << endl;
    vector<int> Vector6 = findMode(dataSet6,4);
    printVector(Vector6);
    cout << endl;
}
*/