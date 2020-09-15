#include <iostream>
using namespace std;

int add(int x, int y){

	return x+y;
}

int multiply(int z, int w){

	return z*w;
}

int main(){

	cout << add(4,5) << '\n';
	cout << add(1+2,3*4) << '\n';

	int a=5;
	cout << add(a,a) << '\n';

	cout << add(1, multiply(2,3)) << '\n';
	cout << add(1,add(2,3)) << '\n';

	return 0;
}
