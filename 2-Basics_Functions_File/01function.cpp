#include <iostream>
using namespace std;

int returnFive(){
	return 5;
}

int main(){

	cout << returnFive() << '\n';
	cout << returnFive() + 2 << '\n';

	returnFive();// okay: the value 5 is returned, but is ignored since main() doesn't do anything with it. Need of "cout" operator 

	return 0;
}
