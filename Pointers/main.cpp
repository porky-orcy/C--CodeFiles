#include <iostream>

using namespace std;

int main()
{
    // & the address
    // * points to the value

    int number = 5;
    int *pointer;
    int address_value_from_number;

    pointer = &number;

    address_value_from_number = *pointer;

    cout << number << endl;
    cout << &number << endl;
    cout << &address_value_from_number << endl;
    cout << address_value_from_number << endl;
    return 0;
}
