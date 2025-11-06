
#include <iostream>
using namespace std;
class Rectangle {
public:
    int length;
    int width;
    Rectangle(int l, int w) : length(l), width(w) {}
    int area() const {
        return length * width;
    }
};
void printArea(const Rectangle &rect) {
    cout << "The area of the rectangle is: " << rect.area() << endl;
}

int main() {
    Rectangle myRect(10, 5);
    printArea(myRect);

    return 0;
}
