#include <iostream>

using namespace std;

class Enemy
{
public:
    void pain(int x)
    {
        damage = x;
    }
protected:
    int damage;
};

class Orc : public Enemy
{
public:
    void attack()
    {
        cout << "Me orc, me smash!!! -" << damage << endl;
    }
};

class Wizzard : public Enemy
{
    public:
    void attack()
    {
        cout << "You shall not pass!!! -" << damage << endl;
    }
};

int main()
{
    Orc o;
    Wizzard w;
    Enemy * e1;
    Enemy * e2;
    e1 = &o;
    e2 = &w;
    e1->pain(25);
    e2->pain(95);
    o.attack();
    w.attack();

    return 0;
}
