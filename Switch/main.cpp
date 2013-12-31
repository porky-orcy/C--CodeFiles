#include <iostream>

using namespace std;

int main()
{
char grade;
cout << "Enter a grade: " << endl;
cin >> grade;

switch(grade)
{
case 'A':
    cout << "You have passed!" << endl;
    break;
    case 'B':
    cout << "You have passed!" << endl;
    break;
    case 'C':
    cout << "You have passed!" << endl;
    break;
    case 'D':
    cout << "You have passed!" << endl;
    break;
    default:
        cout << "You have failed!" << endl;
}
return 0;
}
