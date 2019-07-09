#include <iostream>
using namespace std;

void display() {
    cout << "Hello\n";
}

float add(float x, float y) {
    float z;
    z = x + y;
    return z;
}
int main () {
    float a = 3.5, b = 4, c;
    display();
    c = add(a, b);

    cout << c << "\n";
    return 0;
}


Alvarado