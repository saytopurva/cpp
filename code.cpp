#include <iostream>
using namespace std;

class sum {
public:
    int a, b, c;

    void add();
};

void sum::add() {
    cout << "Enter a and b: ";
    cin >> a >> b;
    c = a + b;
    cout << "Sum = " << c << endl;
}

int main() {
    sum obj1, obj2;

    cout << "Object 1" << endl;
    obj1.add();

    cout << "Object 2" << endl;
    obj2.add();

    return 0;
}