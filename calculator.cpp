#include <iostream>

using namespace std;

int main()
{
    char op;
    int number1;
    int number2;

    cout << "choose operation ('+','*','-', '/'):";
    cin >> op;

    cout << "Number1:";
    cin >> number1;

    cout << "Number2:";
    cin >> number2;

    if (op == '+')
    {
        cout << number1 << "+" << number2 << "=" << number1 + number2;
    }
    if (op == '*')
    {
        cout << number1 << "*" << number2 << "=" << number1 * number2;
    }
    if (op == '-')
    {
        cout << number1 << "-" << number2 << "=" << number1 - number2;
    }
    if (op == '/')
    {
        cout << number1 << "/" << number2 << "=" << number1 / number2;
    }
}