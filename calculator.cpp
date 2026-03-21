#include <iostream>
#include <cmath>

int main() {
    double num1, num2;
    char operation;
    
    std::cout << "Simple Calculator" << std::endl;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    
    std::cout << "Select operation (+, -, *, /, %, ^): ";
    std::cin >> operation;
    
    std::cout << "Enter second number: ";
    std::cin >> num2;
    
    printf("%.2f %c %.2f = ", num1, operation, num2);
    
    switch(operation) {
        case '+':
            std::cout << num1 + num2;
            break;
        case '-':
            std::cout << num1 - num2;
            break;
        case '*':
            std::cout << num1 * num2;
            break;
        case '/':
            if(num2 != 0) {
                std::cout << num1 / num2;
            } else {
                std::cout << "Error: Division by Zero!";
            }
            break;
        case '%':
            std::cout << remainder(num1, num2);
            break;
        case '^':
            std::cout << pow(num1, num2);
            break;
        default:
            std::cout << "Invalid operation!";
    }
    
    std::cout << std::endl;
    
    return 0;
}
