#include <iostream>
using namespace std;

void mul()
{
    double firstNumber, secondNumber, productOfTwoNumbers;
    cout << "Enter two numbers: ";

    // Stores two floating point numbers in variable firstNumber and secondNumber respectively
    cin >> firstNumber >> secondNumber;
 
    // Performs multiplication and stores the result in variable productOfTwoNumbers
    productOfTwoNumbers = firstNumber * secondNumber;  

    cout << "Product = " << productOfTwoNumbers;    
    
    
}