#include <iostream>

using namespace std;

class Human
{
public:
    void breathe()
    {
        cout << "Inhale..." << endl;
        cout << "Exhale..." << endl;
    }
protected:
    int number_of_eyes = 2;
};

class Student : public Human
{
public:
    void study()
    {
        breathe();
        cout << "Studying..." << endl;
    }
    void print_n_o_e()
    {
        cout << "Humans have this many eyes: " << number_of_eyes << endl;
    }
};

int main()
{
    Student st;
    st.study();
    st.print_n_o_e();
    return 0;
}
