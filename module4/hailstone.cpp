#include <iostream>
#include <string>

using namespace std;

/***********************************************
** Name: hailstone
** Description: mainpulates a number till it equals one
** and returns the number of steps to do so back to the user.
** Inputs: num (int)
** Outputs: steps (int)
************************************************/
int hailstone(int num){
    int steps =0;
    do{
        if(num == 1) return steps;
        else if(num %2==0) num = num/2;
        else num = num*3 +1;
        steps++;
    }while(true); 
}

/*
int main(){
	cout << hailstone(3) << endl;
	return 0;
}*/
