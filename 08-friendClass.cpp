#include <bits/stdc++.h>
using namespace std;
// forward declaration
class Complex;

class Calculator
{
public:
    int add(int x, int y)
    {
        return x + y;
    }

    int sumRealComplex(Complex, Complex);
    int sumImagineComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    /*
        // Individually declaring function as friends
        friend int Calculator :: sumRealComplex(Complex,Complex);
        friend int Calculator :: sumImagineComplex(Complex,Complex);
        // ........
        // ........
        // ........
        // ........
        // ........
        // Suppose There are N Number of Function of Calculator Class So we can make caluclator class as a friend class of Complex
    */

   friend class Calculator;// which mean all the methods of class Calculator can access private , protected and public members of class Complex :)

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your Number is : " << a << "+" << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumImagineComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2;
    Calculator calc;

    c1.setNumber(2, 6);
    c2.setNumber(6, 6);

    cout << "Add Function of Calculator : " << calc.add(2, 6) << endl;
    cout << "Sum of Real Number of Object c1 and c2 : " << calc.sumRealComplex(c1, c2) << endl;
    cout << "Sum of Imagine Number of Object c1 and c2 : " << calc.sumImagineComplex(c1, c2) << endl;
    return 0;
}