#include <iostream>
#include <math.h>

using namespace std;

class Point
{
private:
    double x;
    double y;
public:
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
    void setX(int x)
    {
        this->x = x;
    }
    void setY(int y)
    {
        this->y = y;
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    // Point (const Point &point)
    // {
    //     this->x = point.x;
    //     this->y = point.y;
    // }
    ~Point()
    {
        x = 0;
        y = 0;
    }
};

class Circle
{
private:
    Point center;
    double radius;

public:
    Circle()
    {
        center = (0, 0);
    }

    Circle(Point center, double radius)
    {
        this->center = center;
        this->radius = radius;
    }

    Circle(const Circle &circle)
    {
        this->center = circle.center;
        this->radius = circle.radius;
    }
    
    void setCenter(Point point)
    {
        this->center = point;
    }

    void setRadius(double radius)
    {
       this->radius = radius;
    }

    Point getCenter() const
    {
        return center;
    }

    double getRadius() const
    {
        return radius;
    }
    
    void printCircle()
    {
        printf("Center: {%.2f, %.2f} and Radius %.2f\n", this->center.getX(), this->center.getY(), this->radius);
    }
};

int main()
{
    Circle A;
    A.printCircle();
    return 0;
}