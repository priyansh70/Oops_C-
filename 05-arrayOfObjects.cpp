#include <bits/stdc++.h>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setId()
    {
        salary = 10000;
        cout << "Enter the ID of Employee: ";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this employee is : " << id << endl;
    }
};

int main()
{
    Employee fb[4];
    for (int i = 1; i <= 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}