#include <iostream>

using namespace std;

struct area
{
   int height;
   int base;
};

int main()
{
area square;
area triangle;

int total;

square.base = 5;
square.height = 4;
total = square.base * square.height;

cout << total << endl;
}
