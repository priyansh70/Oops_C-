#include <bits/stdc++.h>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kese ho Biro?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1 ::greet();
    }
};

int main()
{
    Base1 base1Obj;
    Base2 base2Obj;

    base1Obj.greet(); // hOW ARE YOU
    base2Obj.greet(); // Kese ho biro

    Derived d;
    // d.greet(); // ambiguity

    d.greet(); // Now print base1 greet because we mention in dervied class

    return 0;
}