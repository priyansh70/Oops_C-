#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    void getData()
    {
        cout << "Real Part of Complex Number : " << real << endl;
        cout << "Imaginary Part of Complex Number : " << imaginary << endl;
    }
};

int main()
{
    Complex c1;
    // c1.setData(4, 5);
    // c1.getData();

    // Complex *ptr = &c1;
    // Complex *ptr = new Complex;
    Complex *ptr = new Complex();
    // (*ptr).setData(1, 50);
    // (*ptr).getData();

    ptr->setData(1, 50); // arrow operator
    ptr->getData();      // arrow operator

    // Array of objects
    Complex *objArray = new Complex[4]; // array of objects
    return 0;
}