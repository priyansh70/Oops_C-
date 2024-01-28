// C++ program to demonstrate
// protected access modifier
#include <bits/stdc++.h>
using namespace std;

// base class
class Parent
{
    // protected data members
protected:
    int id_protected;
};

// sub class or derived class from public base class
class Child : public Parent
{
public:
    void setId(int id)
    {

        // Child class is able to access the inherited
        // protected data members of base class

        id_protected = id;
    }

    void displayId()
    {
        cout << "id_protected is: " << id_protected << endl;
    }
};

// For a protected Member
/*
                      Public Derivation | Private Derivation | Protected Derivation
1. Private Member   | Not Inherited     | Not Inherited      | Not Inherited
2. Protected Member | Protected         | PRivate            | Protected
3. Public Member    | Public            | Private            | Protected
*/
// main function
int main()
{

    Child obj1;
    //obj1.id_protected; // it gives error because we can not access protected member 
    // member function of the derived class can
    // access the protected data members of the base class

    obj1.setId(81);
    obj1.displayId();
    return 0;
}
