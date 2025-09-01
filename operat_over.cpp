#include<iostream>
using namespace std;

class Point {
    public:
        int x;
        int y;

    // constructor
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // normal func
    void display() {
        cout << "(" << x << "," << y << ")";
    }

    // operator overload for +
    Point operator+(const Point& p) {
        return Point(x+p.x, y+p.y);
    }

};

int main() {
    Point p1(1,2);
    Point p2(1, 3);

    Point p3 = p1+p2;
    p3.display();
    return 0;
}