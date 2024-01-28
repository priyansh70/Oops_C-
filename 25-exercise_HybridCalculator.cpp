/*
Exercise Question
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

#include <bits/stdc++.h>
using namespace std;

class SimpleCalculator
{
    float number1;
    float number2;

protected:
    float add, mul, sub, div;
    void setSimpleCalcValue(float number1, float number2)
    {
        this->number1 = number1;
        this->number2 = number2;
    }

    void processSimpleCalc()
    {
        add = number1 + number2;
        mul = number1 * number2;
        sub = number1 - number2;
        div = number1 / number2;
    }

    void displaySimpleCalc()
    {
        cout << "Summation  of these 2 Numbers " << number1 << " and " << number2 << " is : " << add << endl;
        cout << "Substraction of these 2 Numbers " << number1 << " and " << number2 << " is : " << sub << endl;
        cout << "Multiplication of these 2 Numbers " << number1 << " and " << number2 << " is : " << mul << endl;
        cout << "Dividation of these 2 Numbers " << number1 << " and " << number2 << " is : " << div << endl;
    }
};

class ScientificCalculator
{
    float number3;
    float number4;

protected:
    float sqr1, cube1, cbrt1, sqrt1, sqr2, cube2, cbrt2, sqrt2;
    void setScientificCalcValue(float number3, float number4)
    {
        this->number3 = number3;
        this->number4 = number4;
    }

    void processScientificCalc()
    {
        sqr1 = number3 * number3;
        sqr2 = number4 * number4;
        cube1 = number3 * number3;
        cube2 = number4 * number4;
        sqrt1 = number3 * number3;
        sqrt2 = number4 * number4;
        cbrt1 = number3 * number3;
        cbrt2 = number4 * number4;
    }

    void displayScientificCalc()
    {
        cout << "Square of : " << number3 << " is : " << number3 * number3 << endl;
        cout << "Square of : " << number4 << " is : " << number4 * number4 << endl;
        cout << "Cube of : " << number3 << " is : " << number3 * number3 * number3 << endl;
        cout << "Cube of : " << number4 << " is : " << number4 * number4 * number4 << endl;
        cout << "Square Root of : " << number3 << " is : " << sqrt(number3) << endl;
        cout << "Square Root of : " << number4 << " is : " << sqrt(number4) << endl;
        cout << "Cube Root of : " << number3 << " is : " << cbrt(number3) << endl;
        cout << "Cube Root of : " << number4 << " is : " << cbrt(number4) << endl;
    }
};

class HybridCalulator : public SimpleCalculator, public ScientificCalculator
{

    void process()
    {
        processSimpleCalc();
        processScientificCalc();
    }

public:
    void setValue(float num1, float num2)
    {
        setSimpleCalcValue(num1, num2);
        setScientificCalcValue(num1, num2);
        process();
    }

    void display()
    {
        displaySimpleCalc();
        displayScientificCalc();
    }
};

int main()
{
    float num1, num2;

    cout << "Enter first Number : ";
    cin >> num1;

    cout << "Enter second Number : ";
    cin >> num2;

    HybridCalulator calc;
    calc.setValue(num1, num2);
    calc.display();

    return 0;
}