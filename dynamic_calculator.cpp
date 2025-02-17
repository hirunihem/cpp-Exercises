#include <iostream>
using namespace std;

int main()
{
    double num, result;
    char op;

    cout << "===== MULTI-OPERATOR CALCULATOR =====" << endl;

    // Get the first number (with validation)
    cout << "Enter the first number: ";
    while (!(cin >> result))
    {
        cout << "Invalid input! Please enter a number: ";
        cin.clear(); // Clear error flag
        cin.ignore(1000, '\n'); // Ignore invalid input
    }

    while (true)
    {
        cout << "Enter an operator (+, -, *, /) or '=' to finish: ";
        cin >> op;

        if (op == '=') // Stop if user enters '='
        {
            cout << "Final Result: " << result << endl;
            break;
        }

        if (op != '+' && op != '-' && op != '*' && op != '/')
        {
            cout << "Invalid operator! Please enter +, -, *, or /." << endl;
            continue;
        }

        cout << "Enter the next number: ";
        while (!(cin >> num)) // Validate number input
        {
            cout << "Invalid input! Please enter a number: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }

        switch (op)
        {
            case '+':
                result += num;
                break;
            case '-':
                result -= num;
                break;
            case '*':
                result *= num;
                break;
            case '/':
                if (num != 0)
                    result /= num;
                else
                    cout << "Error! Division by zero is not allowed." << endl;
                break;
        }
    }

    return 0;
}

