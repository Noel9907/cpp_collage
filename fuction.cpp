#include <iostream>
using namespace std;

class Shape {
    public:
    float calculateArea(float length, float width) {
        return length * width;
    }
    float calculateArea(float radius) {
        return radius * radius * 3.14;
    }
    int calculateArea(int base, int height) {
        return 0.5 * base * height;
    }
};
int main(){
    float length, width, radius;
    int base, height;
    Shape shape;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << shape.calculateArea(length, width) << endl;
    cout << "Enter the radius of the circle: "; 
    cin >> radius;
    cout << "Area of the circle: " << shape.calculateArea(radius) << endl;
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << shape.calculateArea(base, height) << endl;
    return 0;
}