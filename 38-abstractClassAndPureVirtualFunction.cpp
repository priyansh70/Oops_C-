#include <bits/stdc++.h>
using namespace std;

// Notes 
// 1. A class is abstract if it has at least one pure virtual function.
// 2. We can have pointers and references of abstract class type.
// 3. If we do not override the pure virtual function in the derived class, then the derived class also becomes an abstract class.
// 4. An abstract class can have constructors.
// 5. An abstract class in C++ can also be defined using struct keyword.

class Animal
{
private:
    int weight;
    int age;

public:
    Animal(int weight, int age)
    {
        this->weight = weight;
        this->age = age;
    }

    virtual void speak() = 0; // do nothing function --> pure virtual function
};

class Dog : public Animal
{
public:
    Dog(int weight, int age) : Animal(weight, age) {}

    void speak()
    {
        cout << "Dog Barks" << endl;
    }
};

class Cat : public Animal
{
public:
    Cat(int weight, int age) : Animal(weight, age) {}

    void speak()
    {
        cout << "Meow Meow" << endl;
    }
};

int main()
{
    // Animal animal; // throw error because we can not create abstract class objects

    Animal *animal[2];
    Dog tommy(14, 3);
    Cat pussy(5, 1);

    animal[0] = &tommy;
    animal[1] = &pussy;

    animal[0]->speak();
    animal[1]->speak();

    return 0;
}