//Include the library 
#include<iostream> 
using namespace std;

	//Write a function that has two parameters.
	int func(int a, int b){
		if (a<b){
		return a;
		}
		else {
		return b;
		}
	}
//Driver function 
int main(){
	//Declare variables
	int c,d;
		//Ask the user for the two numbers 
		cout << "Give the two numbers to get the lesser of them " ;
		cin >>c >>d;
		//Tell the user the smaller number
		cout << "The smaller of " <<c <<" and " <<d <<" is "
		//Call the functions for the numbers as arguments 
		<< func (c,d) <<endl;

return 0;
}
