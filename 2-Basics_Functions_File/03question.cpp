//Modify the program you wrote in #2 so that it uses a header file (named io.h) to access the functions instead of using forward declarations directly in your code (.cpp) files. Make sure your header file uses header guards.

#include <iostream> 
using namespace std;
#include "io.h"

int main(){

 int number1{readNumber()};
 int number2{readNumber()};

 writeAnswer(number1 + number2);
 return 0;
}
