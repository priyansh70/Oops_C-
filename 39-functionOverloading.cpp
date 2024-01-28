#include <bits/stdc++.h>
using namespace std;

// Area of Sqaure
float area(int length, int breadth)
{
    return (length * breadth);
}

// Area of Cirle
float area(int radius)
{
    return (3.14 * radius * radius);
}

int main()
{
    cout << "Area of Circle is with radius 5 : " << area(5) << endl;
    cout << "Area of Circle is with Length 5 and Breadth 6 : " << area(5, 6) << endl;
    return 0;
}