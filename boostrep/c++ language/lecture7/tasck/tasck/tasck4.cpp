#include <iostream>
using namespace std;
class Number {
protected:
    int num;

public:
    void getNumber() {
        cout << "Enter a number: ";
        cin >> num;
    }
};

class Square : public Number {
public:
    void calculateSquare() {
        int square = num * num;
        cout << "Square of " << num << " is: " << square << endl;
    }
};

class Cube : public Number {
public:
    void calculateCube() {
        int cube = num * num * num;
        cout << "Cube of " << num << " is: " << cube << endl;
    }
};

int main() {
    Square squareObj;
    squareObj.getNumber();
    squareObj.calculateSquare();

    Cube cubeObj;
    cubeObj.getNumber();
    cubeObj.calculateCube();

    return 0;
}
