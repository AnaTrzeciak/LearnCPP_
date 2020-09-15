#include <iostream>
using namespace std;

//void means the function does not return a value to the caller
void returnNothing(){
	cout << "Hi" << '\n';
}

int main(){

	returnNothing(); //no value is returned

//	cout << returnNothing(); //error: this line will not compile

	return 0;
}
