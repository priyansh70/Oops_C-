#include <bits/stdc++.h>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    // When no copy constructor is found, compiler supplies its own copy constructor 
    Number(Number &obj)
    {
        cout << "Copy Constructor Called" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The Number for this object is " << a << endl;
    }
};

int main()
{
    Number x(45), y,z2;
    x.display();
    y.display();

    Number z(x); //Copy constructor invoked
    z.display();
    
    z2 = z; //Copy constructor Not Called 
    Number z3 = z; //Copy Constructor Invoked :)

    return 0;
}