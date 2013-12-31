#include <iostream>

using namespace std;

int area(int x, int y)
{
    int total = x * y;
    return total;
}

int main()
{
    int b, h;
    cout << "Enter the base length: " << endl;
    cin >> b;
    cout << "Enter the height: " << endl;
    cin >> h;

    cout << "The area is: " << area(b, h) << endl;
    return 0;
}
