#include <bits/stdc++.h>
using namespace std;

class BaseClass
{
public:
    int base_var = 10;
    void display()
    {
        cout << "Displaying Base Class" << endl;
        cout << "Value of Base Variable : " << base_var << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int derived_var = 20;
    void display()
    {
        cout << "Displaying Derived Class" << endl;
        cout << "Value of Derived Variable : " << derived_var << endl;
    }
};

int main()
{
    BaseClass *basePointer;
    BaseClass baseObj;

    DerivedClass derivedObj;

    // Point Base Pointer to Derived Obj
    basePointer = &derivedObj;
    basePointer->base_var = 20;
    // basePointer->derived_var = 20; //throw error because it is pointer of base class and show only inherited data

    basePointer->display();

    DerivedClass *derivedPointer;
    derivedPointer = &derivedObj;
    derivedPointer->derived_var = 100;
    derivedPointer->base_var = 169;
    derivedPointer->display();

    basePointer->display();
    return 0;
}