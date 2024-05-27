// cpp.test-solution-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Point {
public:
    Point(int valX, int valY) : x(valX), y(valY)
    {}
    Point() : Point(0, 0)
    {}
    Point operator+ (Point& point) const {
        Point newPoint(Point::x + point.x,
            Point::y + point.y);
        return newPoint;
    }
    Point operator+ (int posX) const {
        Point newPoint(Point::x + posX,
            Point::y);
        return newPoint;
    }
    void operator+= (Point& point) {
        *this = *this + point;
    }
private:
    int x;
    int y;
};

int main() {
    Point pt1(1, 1), pt2(2, 2), pt3;
    pt3 = pt1 + pt2;
    pt2 += pt1;
    pt3 = pt1 + 5;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
