#include <iostream>
using namespace std;

int main() {
    cout << "Please, enter an operation and two operands separated by spaces" << endl
         << "Available operations: +, -, *, /" << endl
         << "For example, + 2 13" << endl ;
    char operation {'?'};
    double operand1 {0};
    double operand2 {0};
    double result {0};
    cin >> operation >> operand1 >> operand2;
    if (operation == '+') 
    {
        result = operand1 + operand2;
    }
    else
    {
        if (operation == '-') 
        {
            result = operand1 - operand2;
        }
        else
        {
            if (operation == '*')
            {
                result = operand1 * operand2;
            }
            else
            {
                if (operation == '/')
                {
                    result = operand1 / operand2;
                }
                else
                {
                    cout << "Please, check input condition";
                }
                
            }
            
        }
        
    }
    cout << "Result is " << result;
    cin >> operation;   //screen freezing

    return 0;
}