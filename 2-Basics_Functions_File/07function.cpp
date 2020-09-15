#include <iostream>
using namespace std;

int getValueFromUser(){

	cout << "Enter an integer: ";
	int input=0;
	cin >> input;

	return input;
}

void printDouble(int value){

	cout << value << " double is: " << value*2 << '\n';
}

int main(){

	int num{getValueFromUser()};
	printDouble(num);

	return 0;
}
