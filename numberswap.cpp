// write a program in c++ to swap two number
#include <iostream>
using namespace std;

int main()
 {
    int num1, num2, temp;

    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    
    temp = num1;
    num1 = num2;
    num2 = temp;

    
    cout << "After swapping: " << num1 << " " << num2 << endl;

    return 0;
}

