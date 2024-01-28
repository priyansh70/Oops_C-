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

    // Default Constructor
    Complex()
    {
        cout << "Constructor Called" << endl;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
        printNumber();
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
        printNumber();
    }
};

int main()
{
    Complex c1;
    Complex c2(5);
    Complex c3(4, 6);
    return 0;
}
