#include <iostream>
#include <string>
using namespace std;

void a_test()
{
    cout << "Hello World!" << endl;
}

string my_name()
{
    string name = "Billy Bob";
    return name;
}

int area()
{
    int base = 5;
    int height = 4;
    int total = base * height;
    return total;
}


int main()
{
    a_test();
    cout << "Hello my name is: " << my_name() << "and the area of my wall is " << area() << endl;
    return 5;
}
