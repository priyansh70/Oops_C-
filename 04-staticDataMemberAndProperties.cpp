#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int id;
    // int count = 0; // it create for every object so it will not count
    // so we make it as a static data member which mean now it is a class variable
    static int count; // static data member of class

public:
    void setData(void)
    {
        cout << "Enter the ID : ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is : " << id << " and the number of this employee is : " << count << endl;
    }

    static void getCount()
    {
        // cout<<id; // throw error - only access static variable
        cout << "The value of count is: " << count << endl;
    }

} lulu, tulu, chulu;

int Employee ::count = 0;

int main()
{
    lulu.setData();
    lulu.getData();
    Employee::getCount();

    tulu.setData();
    tulu.getData();
    Employee::getCount();

    chulu.setData();
    chulu.getData();
    Employee::getCount();

    return 0;
}