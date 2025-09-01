#include<iostream>
using namespace std;


class Shape {
    public: 
    virtual void draw() = 0; // pure virtual function automatically makes this class abstract

    // normal function or a common feature
    void info() {
        cout << "this is a shape" << endl;
    }
};

class Circle: public Shape {
    public:
        void draw() override {
            cout << "circle is drawing";
        }
};

class Rectangle: public Shape {
    public:
        void draw() override {
            cout << "Rectangle is drawing";
        }
};


int main() {
    Shape* circle = new Circle();
    Shape* rect = new Rectangle();

    circle->draw();
    rect->draw();

    return 0;
}