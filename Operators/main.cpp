#include <iostream>

using namespace std;

int main()
{
    int num1 = 5;
    int num2 = 4;
    int total;

    total = num1 * num2;
    cout << "Mutliplication: " << total << endl;

    total = num1 + num2;
    cout << "Addition: " << total << endl;

    total = num1 - num2;
    cout << "Subtraction: " << total << endl;

    total = num1 / num2;
    cout << "Division: " << total << endl;

    total = num1 % num2;
    cout << "Modulo: " << total << endl;
    return 0;
}
