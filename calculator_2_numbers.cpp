//author
//date

#include <iostream>
using namespace std;

int main()
{
    double num1, num2, result;
    char op;

    cout << "===== SIMPLE CALCULATOR =====" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform operation based on the operator
    switch(op)
    {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;

        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;

        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;

        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            }
            else
            {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;

        default:
            cout << "Invalid operator! Please enter +, -, *, or /." << endl;
    }

    return 0;
}
