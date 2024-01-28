#include <bits/stdc++.h>
using namespace std;

/*
CASE - I
class B : public A{
    Order of execution of constructor -> first A() then B()
}

CASE - II
class A : public B,public C{
    Order of execution of constructor -> first B() then C() and A()
}

CASE - III
class A : public B, virtual public C{
    Order of execution of constructor -> first C() then B() and A()
}

*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base Class1 Constructor Called" << endl;
    }

    void printBaseIData(void)
    {
        cout << "The value of data1 is : " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base Class2 Constructor Called" << endl;
    }

    void printBaseIIData(void)
    {
        cout << "The value of data2 is : " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(c), Base2(d)
    {
        derived1 = a;
        derived2 = b;
        cout << "Derived Class Constructor Called " << endl;
    }

    void printAllData()
    {
        printBaseIData();
        printBaseIIData();
        cout << "Derived 1 : " << derived1 << endl;
        cout << "Derived 2 : " << derived2 << endl;
    }
};

int main()
{
    Derived d(1, 5, 9, 7);
    d.printAllData();
    return 0;
}