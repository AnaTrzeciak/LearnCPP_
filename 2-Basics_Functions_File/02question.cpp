//Modify the program you wrote in exercise #1 so that readNumber() and writeAnswer() live in a separate file called “io.cpp”. Use a forward declaration to access them from main().

//If you’re having problems, make sure “io.cpp” is properly added to your project so it gets compiled.

#include <iostream>
using namespace std;

int readNumber();
int writeAnswer(int x);

int main(){

 int number1{readNumber()};
 int number2{readNumber()};

 writeAnswer(number1 + number2);
 return 0;
}
