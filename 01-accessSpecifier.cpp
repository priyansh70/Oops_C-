#include <iostream>
using namespace std;

class Employee
{
private:
    string id, workDepartment;
    int salary;

public:
    string name;
    int age;
    void setData(string empId, int empSalary, string empWorkDepartment);
    void getData()
    {
        cout << "The Value of is name : " << name << endl;
        cout << "The Value of is age : " << age << endl;
        cout << "The Value of is empId : " << id << endl;
        cout << "The Value of is salary : " << salary << endl;
        cout << "The Value of is workDepartment : " << workDepartment << endl;
    }
};

void Employee ::setData(string empId, int empSalary, string empWorkDepartment)
{
    id = empId;
    salary = empSalary;
    workDepartment = empWorkDepartment;
}

int main()
{
    Employee emp;
    // not access private member directly
    // emp.workDepartment = "Development"; // Error

    emp.name = "Devil";
    emp.age = 20;
    emp.setData("#D1001", 50000, "developer");

    emp.getData();
    return 0;
}