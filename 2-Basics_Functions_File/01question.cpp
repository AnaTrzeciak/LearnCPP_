//Write a single-file program (named main.cpp) that reads two separate integers from the user, adds them together, and then outputs the answer. The program should use three functions

//A function named “readNumber” should be used to get (and return) a single integer from the user.
//A function named “writeAnswer” should be used to output the answer. This function should take a single parameter and have no return value.
//A main() function should be used to glue the above functions together.

#include <iostream>
using namespace std;

int readNumber(){
  int input = 0;
 
  cout << "Entre com o número: " << '\n';
  cin >> input;

  return input;
} 

void writeAnswer(int x){

  cout << "O numero é " << x << '\n';
}
 
int main(){

 int number1{readNumber()};
 int number2{readNumber()}; 

 cout << "O primeiro numero é: " << number1 << '\n';
 cout << "O segundo numero é: " << number2 << '\n';

 writeAnswer(number1 + number2);
 return 0;
}
