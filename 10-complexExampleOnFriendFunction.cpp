#include <bits/stdc++.h>
using namespace std;
// forward declaration
class C2;

class C1
{
    int val1;
    friend void exchange(C1 &, C2 &);

public:
    void setValue(int val)
    {
        val1 = val;
    }

    void display()
    {
        cout << val1 << endl;
    }
};

class C2
{
    int val2;
    friend void exchange(C1 &, C2 &);

public:
    void setValue(int val)
    {
        val2 = val;
    }

    void display()
    {
        cout << val2 << endl;
    }
};

void exchange(C1 &o1, C2 &o2)
{
    int tmp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = tmp;
}

int main()
{
    C1 x;
    x.setValue(69);
    cout << "X Value: ";
    x.display();

    C2 y;
    y.setValue(31);
    cout << "Y Value: ";
    y.display();

    exchange(x, y);
    cout << "After Exchange Value: " << endl;
    cout << "X Value: ";
    x.display();
    cout << "Y Value: ";
    y.display();
    return 0;
}