#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    void printNumber()
    {
        cout << "Your Number is : " << a << "+" << b << "i" << endl;
    }
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created
    Complex(void); // This is default constructor
};

Complex ::Complex(void)
{
    a = 10;
    b = 0;
}

int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    return 0;
}

// Properties of Constructor
// 1 - It should be declared in the public section of the class 
// 2 - They are automatically invoked whenever the object is created
// 3 - They cannot return values and Do not have returns types
// 4 - It can have default values
// 5 - We cannot refer to their address 