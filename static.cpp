#include <iostream>
using namespace std;

class MyClass {
public:
    
    static void display() {
        cout << "Static display() with no parameters" << endl;
    }

    
    static void display(int x) {
        cout << "Static display(int): " << x << endl;
    }


    static void display(int x, int y) {
        cout << "Static display(int, int): " << x << ", " << y << endl;
    }
};

int main() {
    MyClass::display();
    MyClass::display(10);
    MyClass::display(20, 30);

    return 0;
}
