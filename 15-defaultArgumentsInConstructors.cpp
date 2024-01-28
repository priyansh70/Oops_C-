#include <bits/stdc++.h>
using namespace std;

class Simple
{
    int data1;
    int data2;

public:
    Simple(int x, int y = 10)
    {
        data1 = x;
        data2 = y;
        printData();
    }

    void printData()
    {
        cout << "Data of Simple Class is : " << data1 << " and " << data2 << endl;
    }
};

int main()
{
    Simple s1(9);    // 9,10
    Simple s2(4, 5); // 4,5
    return 0;
}