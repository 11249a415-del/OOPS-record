#include <iostream>
using namespace std;

class Box {
private:
    double length, breadth, height;

public:
    
    Box() {
        length = 1.0;
        breadth = 1.0;
        height = 1.0;
    }

    
    Box(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }

    
    Box(const Box &b) {
        length = b.length;
        breadth = b.breadth;
        height = b.height;
    }

    
    double volume() {
        return length * breadth * height;
    }

    
    void display() {
        cout << "Length: " << length << ", Breadth: " << breadth << ", Height: " << height << endl;
    }
};

int main() {
    
    Box box1;
    cout << "Box 1 (default constructor) volume: " << box1.volume() << endl;
    box1.display();

    
    Box box2(2.5, 3.5, 4.5);
    cout << "Box 2 (parameterized constructor) volume: " << box2.volume() << endl;
    box2.display();

    
    Box box3 = box2;
    cout << "Box 3 (copy constructor) volume: " << box3.volume() << endl;
    box3.display();

    return 0;
}
