#include <bits/stdc++.h>
using namespace std;
class Point
{
    int x, y;
    friend void displayDistance(Point, Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
        displayPoint();
    }

    void displayPoint()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};

void displayDistance(Point p1, Point p2)
{
    int xSquare = pow((p2.x - p1.x), 2);
    int ySquare = pow((p2.y - p1.y), 2);
    double distance = sqrt(xSquare + ySquare);
    cout << "Distance between points : " << distance << endl;
}

int main()
{
    Point p1(4, 9);
    Point p2(7, 6);

    displayDistance(p1, p2);
    return 0;
}