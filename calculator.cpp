#include <iostream>
using namespace std;

int main() {
    cout << "Please, enter an operation and two operands separated by spaces" << endl
         << "Available operations: +, -, *, /" << endl
         << "For example, + 2 13" << endl;
    char operation;
    double operand1, operand2, result {0};
    cin >> operation >> operand1 >> operand2;
    //calculating
    if (operation == '+')
        result = operand1 + operand2;
    else {
        if (operation == '-')
            result = operand1 - operand2;
        else {
            if (operation == '*')
                result = operand1 * operand2;
            else {
                if (operation == '/')
                    result = operand1 / operand2;
                else {
                    cout << "Please, check input condition" << endl;
                }
            }
        }
    }
    cout << "Result is " << result << endl;
    
    system("pause");
    return 0;
}
