#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int realNumber;
    int imaginaryNumber;

public:
    void setNumber(int real, int imaginary)
    {
        realNumber = real;
        imaginaryNumber = imaginary;
    }

    void sumComplexNumber(Complex object1, Complex object2)
    {
        realNumber = object1.realNumber + object2.realNumber;
        imaginaryNumber = object1.imaginaryNumber + object2.imaginaryNumber;
    }

    void displayNumber();
};

void Complex ::displayNumber(void)
{
    cout << "Complex Number is : " << realNumber << "+" << imaginaryNumber << "i" << endl;
}

int main()
{
    Complex c1, c2, c3;

    c1.setNumber(4, 5);
    c1.displayNumber();

    c2.setNumber(3, 8);
    c2.displayNumber();

    c3.sumComplexNumber(c1, c2);
    c3.displayNumber();
    return 0;
}