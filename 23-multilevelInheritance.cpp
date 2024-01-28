#include <bits/stdc++.h>
using namespace std;

class Student
{
protected:
    string name;
    string rollNumber;

public:
    void setStudentData(string name, string rollNumber)
    {
        this->name = name;
        this->rollNumber = rollNumber;
    }

    void getStudentData()
    {
        cout << "Student Name is : " << name << endl;
        cout << "Student Roll Number is : " << rollNumber << endl;
    }
};

class Exam : public Student
{
protected:
    float mathsMarks;
    float physicsMarks;
    float chemistryMarks;

public:
    void setMarks(float, float, float);
    void getMarks()
    {
        cout << "Maths Marks is : " << mathsMarks << endl;
        cout << "Physics Marks is : " << physicsMarks << endl;
        cout << "Chemistry Marks is : " << chemistryMarks << endl;
    }
};

void Exam ::setMarks(float mathsMarks, float physicsMarks, float chemistryMarks)
{
    this->mathsMarks = mathsMarks;
    this->physicsMarks = physicsMarks;
    this->chemistryMarks = chemistryMarks;
}

class Result : public Exam
{
protected:
    float totalMarks;
    float percentages;
    void calculatePercentage()
    {
        percentages = (mathsMarks + physicsMarks + chemistryMarks) / 3;
    }

public:
    void displayResult()
    {
        calculatePercentage();
        cout << name << "'s Roll Number " << rollNumber << " and Obtained Marks -" << endl;
        getMarks();
        cout << "Percentages: " << percentages << endl;
    }
};

int main()
{
    // Notes
    // If we are inheriting from B from A and C from B [A-->B-->C] So -
    // 1 - A is the base class for B and B is the base class for C
    // 2 - A-->B-->C is called Inheritance Path
    Result std;
    std.setStudentData("Priyansh", "CSE69");
    std.setMarks(100, 94.5, 92);
    std.displayResult();
    return 0;
}