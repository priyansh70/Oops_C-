#include <bits/stdc++.h>
using namespace std;
// OOPs - Classes and Objects

// C++ -> initially called -> C with classes by stroustroup
// class -> extention of structure (in C)
// structures and limitatins
//       -> members are public
//       -> No Methods

// classes -> structures + more
// classes -> can have methods and properties
// classes -> can make few members as private & few as public
// structures in c++ are typedefed
// you can declare objects along with the class declaration
/*
class Employee{
    //class deginition
}priyansh,bhosu
*/
//    Mean priaynsh and bhosu object of Employee
// bhosu.salary = 100 make no sense if salary  is private

// Nesting of member functions
class binary
{
    // Default - private
    string s;
    void check_binary(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number:" << endl;
    cin >> s;
}

void binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    check_binary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s[i] = '1';
        }
        else
        {
            s[i] = '0';
        }
    }
}

void binary ::display(void)
{
    check_binary();
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.check_binary();
    cout << "Display Binary Number" << endl;
    b.display();
    b.ones_compliment();
    cout << "Display Complement" << endl;
    b.display();

    return 0;
}