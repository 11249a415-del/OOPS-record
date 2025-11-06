#include <iostream>
using namespace std;

class Calculator {
public:
    
    int add(int a, int b) {
        return a + b;
    }

    
    int add(int a, int b, int c) {
        return a + b + c;
    }

    
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Add 2 integers: " << calc.add(10, 20) << endl;       
    cout << "Add 3 integers: " << calc.add(10, 20, 30) << endl;  
    cout << "Add 2 doubles: " << calc.add(10.5, 20.7) << endl;   

    return 0;
}
