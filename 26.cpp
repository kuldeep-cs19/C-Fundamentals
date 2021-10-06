#include <iostream>
#include <math.h>

using namespace std;

class Point
{
    // public :
    friend void dist(Point &c, Point &d);
    int x, y;

public:
    void setPoint()
    {
        cout << "Enter the X coordinate of point " << endl;
        cin >> x;
        cout << "Enter the y coordinate of point " << endl;
        cin >> y;
    }
};

void dist(Point &c, Point &d)
    {

        float k = sqrt((d.x - c.x) * (d.x - c.x) + (d.y - c.y) * (d.y - c.y));
        cout << "The distance between two points is " << k << endl;
    }

int main()
{
    Point c, d;
    c.setPoint();
    d.setPoint();
    dist(c, d);
    return 0;
}