#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Triangle" << endl;
    }
};

int main() {
    Shape* shape;
    Shape shape1;
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

shape = &shape1;
    shape->draw();
    shape = &circle;
    shape->draw();  

    shape = &rectangle;
    shape->draw(); 

    shape = &triangle;
    shape->draw();  

    return 0;
}