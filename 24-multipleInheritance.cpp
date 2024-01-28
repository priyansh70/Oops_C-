#include <bits/stdc++.h>
using namespace std;

// Syntax
// class derivedClass : visibilityMode baseClass1 , visibilityMode baseClass2{
//  body of class derivedClass
// };

class Base1
{
protected:
    int base1int;

public:
    void setBase1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void setBase2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of Base1 is : " << base1int << endl;
        cout << "The value of Base2 is : " << base2int << endl;
        cout << "The sum of these values is : " << base1int + base2int << endl;
    }
};
// The inherited derived class will look something like this -
// Data Members
// base1int --> protected
// base2int --> protected

// Member functions
// set_base1int() --> public
// set_base2int() --> public
// set_show() --> public

int main()
{
    Derived child;
    child.setBase1int(10);
    child.setBase2int(20);
    child.show();
    return 0;
}