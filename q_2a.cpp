//Include the library
#include<iostream>
using namespace std;

	//Write a function that has two parameters.
	int func(int a, int b){
		//Give their sum.
		int sum = a + b;
		return sum;
	}

//Driver function
int main(){
	//Declare variables
	int c,d;
		//Ask the user for two numbers.
		cout<< "Give two numbers be ";
		cin >>c >>d;
		//Tell user the sum
		cout<<"The sum of the numbers "<<c<< " and " <<d<<" is "<< 
		//Call function for numbers as arguments
        func(c,d) <<endl;
		
return 0;
}
