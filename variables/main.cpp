#include <iostream>
#include <string>
using namespace std;

int main()
{
    int my_int; // +/- 2,147,483,648
    double my_double; //same as float +/- 9,223,372,036,854, 775, 808
    float my_float;
    bool my_bool; //true or false
    char my_char; // 4 bytes +/- 127
    string my_string; //used for text strings

    my_int = 5;

    my_string = "My First String";

    cout << "Hello world!" << endl;
    cout << "My Int is equal to: " << my_int << endl;
    cout << "My String is equal to: " << my_string << endl;

    return 0;
}
