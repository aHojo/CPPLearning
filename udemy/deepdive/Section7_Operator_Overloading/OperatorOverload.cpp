// Operator Overloading

/*
    + int, float
    *
    /
    -
    ()
    new
    delete
    ++
    --
    etc
*/

//Complex Number
// a is real i is imaginary
// i = sqrt(-1)
//a + ib


// 5+ 7i
// +
// 2+ 9i
// =
// 7 + 16i --- c3 = c1 + c2


#include <iostream>

class Complex
{

    public:
        int real;
        int imaginary;

        Complex(int r = 0,  int i = 0)
        {
            real = r;
            imaginary = i;
        }
    // Can olny add int and floats, so you need to overload to add objects.
    Complex operator+(Complex x){
        Complex temp;
        temp.real = real + x.real;
        temp.imaginary = imaginary + x.imaginary;
        return temp;
    }
};

int main()
{

    Complex c1(3, 7);
    Complex c2(5, 4);
    Complex c3;


    // This is the operator overloaded --
    // c3 = c1.operator+(c2);
    c3 = c1+c2;
    std::cout << c3.real << "+i"<<c3.imaginary << std::endl;
}