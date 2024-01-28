#include <bits/stdc++.h>
using namespace std;

// This KEYWORD
// 1 -> this is a keyword which is a pointer, and it points to the object which invokes the member function
// 2 -> this can return object
class TimePass
{
    int timeInHr;

public:
    // TimePass& setTime(int timeInHr)
    void setTime(int timeInHr)
    {
        // timeInHr = timeInHr; // it gives value to itself beacuse priority is local scope variables
        this->timeInHr = timeInHr;
        // return *this; // we can return instance of object
    }

    void getTime()
    {
        cout << "Current Time in Hr : " << timeInHr << endl;
    }
};

int main()
{
    TimePass t;
    t.setTime(12);
    t.getTime();

    return 0;
}