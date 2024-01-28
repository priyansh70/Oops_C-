#include <bits/stdc++.h>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

// Example

/*
class Test{
    int a;
    int b;
    public:
        Test(int i,int j) : a(i), b(j){
            cout<<"Constructor Called"<<endl;
        }
};
*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j) // 4 , 6
    // Test(int i, int j) : a(i), b(i + j) // 4 , 10
    // Test(int i, int j) : a(i), b(2 * j) // 4 , 12
    // Test(int i, int j) : a(i), b(a + j) // 4 , 10
    // Test(int i, int j) : b(j), a(i + b) // RED FLAG -> This will create problem because a will be initialized first because it is first declared.
    // Test(int i, int j) : a(i){
    // b = j;
    // } -> 4,6

    Test(int i, int j) : a(i), b(a + j)
    {
        cout << "Constructor Called" << endl;
        cout << "Value of a is : " << a << endl;
        cout << "Value of b is : " << b << endl;
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}