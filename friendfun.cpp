#include <iostream>
using namespace std;

class Box {
private:
    double length;

public:
    Box(double l) : length(l) {}

    
    friend void printLength(Box box);
};


void printLength(Box box) {
    cout << "Length of the box is: " << box.length << endl;
}

int main() {
    Box b(10.5);

    
    printLength(b);

    return 0;
}
