#include <iostream>
#include <string>

using namespace std;


/***********************************************
** Name: fallDistance
** Description: formula for the distance travelled of an
** object when dropped on earth.
** Inputs: Time (float)
** Outputs Distance (float)
************************************************/
float fallDistance(float Time){
    float static const gravity = 9.8;
    return (.5 * gravity * Time * Time);
}


/*
int main(){
	cout << fallDistance(3.0) << endl;
	return 0;
}*/