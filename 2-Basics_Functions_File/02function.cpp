#include <iostream>
using namespace std;

int getValueFromUser(){ //this function now returns an integer value

	cout << "Enter an integer: ";
	int input=0;
	cin >> input;

	return input; //return the value the user entered back to the caller
}

int main(){

	int num {getValueFromUser()}; //initializa num with the return value of function

	cout << num << " doubled is: " << num*2 <<'\n';

	return 0;
}
//When this program executes, the first statement in main will create an int variable named num. When the program goes to initialize num, it will see that there is a function call to getValueFromUser, so it will go execute that function. Function getValueFromUser, asks the user to enter a value, and then it returns that value back to the caller (main). This return value is used as the initialization value for variable num.
