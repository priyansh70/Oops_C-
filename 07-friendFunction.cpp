#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend Complex sumComplexNumber(Complex o1, Complex o2);

    void printNumber()
    {
        cout << "Your Number is : " << a << "+" << b << "i" << endl;
    }
};

Complex sumComplexNumber(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplexNumber(c1, c2);
    sum.printNumber();
    return 0;
}

// Properties of Friend Function 
// 1 -> Not in the scope of class 
// 2 -> Since it is not in the scope of class , it cannot be called from the object of that class. c1.sumComplexNumber() is Invalid
// 3 -> Can be invoked without objects as argument
// 4 -> Usually contains the objects as arguments
// 5 -> Can be declared inside public or private section of the class
// 6 -> It cannot access the member directly by their names and need objectsName.memberName to access any member.
// 7 -> The concept of friends is not in Java.