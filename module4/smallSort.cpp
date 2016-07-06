#include <iostream>
#include <string>

using namespace std;


/***********************************************
** Name: swapper
** Description: swaps the values of two integers by reference
** Inputs: num1 and num2
** Outputs: N/A
************************************************/
void swapper(int &num1,int &num2){
    int temp = num1;
    
    num1 = num2;
    num2 = temp;
}


/***********************************************
** Name: smallSort
** Description: O(1) sorts three ints and puts them in 
** ascending order.
** Inputs: a,b,c (float)
** Outputs: N/A
************************************************/
void smallSort(int &a, int &b, int &c){
    if(a > c)swapper(a,c);
    if(a > b)swapper(a,b);
    if(b > c)swapper(b,c);
}

/*
int main(){
	int a = 14;
	int b = -90;
	int c = 2;

	smallSort(a,b,c);
	cout << a << " " << b << " " << c << endl;
	return 0;
}
*/