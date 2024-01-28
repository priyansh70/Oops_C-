#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Basic Example
    int a = 4;
    int *ptr = &a;

    cout << "The Value of a is : " << *ptr << endl;

    // New KEyword
    int *p = new int(69);
    cout << "The Value of p is : " << p << endl;
    cout << "The Value of Address p is : " << *p << endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] : " << arr[0] << endl;
    cout << "The value of arr[1] : " << arr[1] << endl;
    cout << "The value of arr[2] : " << arr[2] << endl;

    // Delete Keyword
    // delete arr;
    delete[] arr;
    cout << "The value of arr[0] : " << arr[0] << endl;
    cout << "The value of arr[1] : " << arr[1] << endl;
    cout << "The value of arr[2] : " << arr[2] << endl;

    return 0;
}