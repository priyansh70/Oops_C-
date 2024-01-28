#include <bits/stdc++.h>
using namespace std;

// forward Declaration 
class Y;

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};

class Y
{
    int num;
    friend void add(X, Y);

public:
    void setValue(int value)
    {
        num = value;
    }
};

void add(X o1, Y o2)
{
    cout << "Summing data of X and Y Objects : " << o1.data + o2.num;
}

int main()
{
    X x;
    x.setValue(4);
 
    Y y;
    y.setValue(5);

    add(x, y);

    return 0;
}