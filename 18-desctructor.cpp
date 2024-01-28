#include <bits/stdc++.h>
using namespace std;

class num
{
private:
    static int count;

public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number : " << count << endl;
    }
    // Destructor never takes an argunment nor does it return any value
    ~num()
    {
        cout << "Destructure Called" << endl;
    }
};

int num ::count;

int main()
{
    num a,b,c;
    return 0;
}