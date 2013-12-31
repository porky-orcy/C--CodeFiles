#include <iostream>

using namespace std;
class Enemy
{
public:
    virtual void attack()
    {

    }
};

class Orc : public Enemy
{
public:
    void attack()
    {
        cout << "ME ORC, ME SMASH YOU!!!" << endl;
    }
};

class Wizzard : public Enemy
{
public:
    void attack()
    {
        cout << "YOU SHALL NOT PASS!!!" << endl;
    }
};
int main()
{
    Orc o;
    Wizzard w;
    Enemy *e1 = &o;
    Enemy *e2 = &w;
    e1->attack();
    e2->attack();
    return 0;
}
