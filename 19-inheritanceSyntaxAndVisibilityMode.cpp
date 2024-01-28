#include <bits/stdc++.h>
using namespace std;

// Base Class
class Employee
{
    float salary;

public:
    // Constructor
    int id;
    Employee(int inpID, float inpSalary = 1000)
    {
        id = inpID;
        salary = inpSalary;
    }

    Employee() {}

    // Get Data function
    void getDetails()
    {
        cout << "Employee ID : " << id << endl;
        cout << "Employee Salary : " << salary << endl;
    }

    void greet()
    {
        cout << "Hello Employee!" << endl;
    }
};

// Derived Class
// Syntax 👇
/*
class derivedClassName : visibilityMode baseClassName{
    class members / methods/ etc
};
*/
// Notes
// 1 - Default Visiblity mode is private
// 2 - Public Visiblity Mode  -> Public Members of the base class becomes Public members of the derived class
// 3 - Private Visiblity Mode  -> Public Members of the base class becomes private members of the derived class
// 4 - Private Members are never inherited

// Creating a Programmer Class Derived from Employee Base Class
class Programmer : public Employee
{
public:
    string languageName;

    Programmer(int inpId)
    {
        id = inpId;
        languageName = "JavaScript";
    }
};

int main()
{
    Employee Adani(10, 4000);
    Adani.getDetails();

    Programmer Ambani(12);
    Ambani.greet();      // it is employee method but we access by child
    Ambani.getDetails(); // not get salary because private of employee

    return 0;
}