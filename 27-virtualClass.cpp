#include <bits/stdc++.h>
using namespace std;

/*
Student --> Test
Student --> Sports
Test --> Result
Sports --> Result
*/

class Student
{
protected:
    int rollNumber; 

public:
    void setNumber(int a)
    {
        rollNumber = a;
    }
    void printNumber()
    {
        cout << "Your Roll Number is : " << rollNumber << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void printMarks()
    {
        cout << "Your Result is here - " << endl<< "Maths : " << maths << endl << "Physics : " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void setScore(float sc)
    {
        score = sc;
    }

    void getScore()
    {
        cout << "Your PT Score is : " << score << endl;
    }
};

class Result : public Sports, public Test
{
    float total;

public:
    void display()
    {
        total = maths + score + physics;
        printNumber();
        printMarks();
        getScore();
        cout << "Your Total Score is : " << total << endl;
    }
};

int main()
{
    Result devil;
    devil.setNumber(696969);
    devil.setMarks(90, 99.5);
    devil.setScore(7);
    devil.display();
    return 0;
}