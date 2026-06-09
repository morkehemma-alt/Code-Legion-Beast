#include <iostream>
#include <cmath>

using namespace std;

int addNumbers(int a, int b){
    return a + b;
}
int subtractNumbers(int a, int b){
    return a - b;
}
int multiplyNumbers(int a, int b){
    return a * b;
}
int divideNumbers(int a, int b){
    return a / b;
};
int main(){
    string command;
    do{
    int firstNumber,secondNumber,sum,difference,product,quotient;
    string operand;
    std::cout << "Enter two numbers for your calculation." << endl;
    std::cout << "First Number: ";
    std::cin >> firstNumber;
    std::cout << "\nSecond Number: ";
    std::cin >> secondNumber;
    std::cout << "Enter the operand" << endl;
    std::cin >> operand;
    std::cout << firstNumber<<" " <<operand<<" "<<secondNumber<<" = "<< endl;

    if(operand == "+" || operand == "plus"){
        sum = addNumbers(firstNumber,secondNumber);
        cout << "Sum: " << sum << endl;
    }else
    if(operand == "-" || operand == "minus"){
        difference =  subtractNumbers(firstNumber,secondNumber);
        cout << "Difference: " <<  difference  << endl;
    }else
    if(operand == "*" || operand == "multiply"){
       product =  multiplyNumbers(firstNumber,secondNumber);
        cout << "Product: " << product << endl;
    }else
    if(operand == "/" || operand == "divide"){
      quotient = divideNumbers(firstNumber,secondNumber);
        cout << "Quotient: " << quotient << endl;
    }
        cout << "Press any key to continue."<< endl;
        cin >> command ;

    }while(command != "exit" && command != "Exit" && command != "EXIT");


return 0;}
