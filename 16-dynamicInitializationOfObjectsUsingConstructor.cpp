#include <bits/stdc++.h>
using namespace std;

class BankDeposite
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposite()
    {
        cout << "Constructor Called" << endl;
    }

    BankDeposite(int p, int yr, float r); // r can be a value like 0.04
    BankDeposite(int p, int yr, int r);   // r can be a value like 4
    void show();
};

BankDeposite ::BankDeposite(int p, int yr, float r)
{

    cout << "Floating Constructor Called" << endl;

    principal = p;
    years = yr;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < yr; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposite ::BankDeposite(int p, int yr, int r)
{
    cout << "Integer Constructor Called" << endl;

    principal = p;
    years = yr;
    interestRate = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < yr; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposite ::show()
{
    cout << endl
         << "Principal Amount was : " << principal << endl
         << "Return Value After " << years << "Years is : " << returnValue << endl;
}

int main()
{
    BankDeposite bd1, bd2, bd3;

    int p, y;
    float r;
    int R;

    cout << "Enter the values of Principal(p), Years(y) and Rate(r)" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposite(p, y, r);
    bd1.show();

    cout << "Enter the values of Principal(p), Years(y) and Rate(R)" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposite(p, y, R);
    bd2.show();

    return 0;
}