#include <iostream>
using namespace std;

int main()
{

    int n1, n2;
    cout << "enter 2 integer:";
    cin >> n1 >> n2;

    cout << "enter an operator(+,-,,*,/): ";
    char operation;
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << "sum is :" << n1 + n2 << endl;
        break;
    case '-':
        cout << "difference is :" << n1 - n2 << endl;
        break;
    case '*':
        cout << "product is :" << n1 * n2 << endl;
        break;
    case '/':
        cout << "division is :" << n1 / n2 << endl;
        break;
    default:
        cout << "enter a valid operator" << endl;
        break;
    }
    return 0;
}