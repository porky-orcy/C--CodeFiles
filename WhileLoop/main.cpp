#include <iostream>

using namespace std;

int main()
{
    int grade;
    while (grade < 6)
    {
        cout << "Enter your grade: " << endl;
        cin >> grade;
        cout << "You need to work harder!!!" << endl;
    }
    cout << " you have passed!";
    return 0;
}
