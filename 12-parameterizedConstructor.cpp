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

    Complex(int, int); // This is parameterized constructor
};

Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
    printNumber();
}

int main()
{
    // Implicit Call
    Complex a(4, 3);

    // Explicit Call
    Complex b = Complex(5, 9);

    return 0;
}
