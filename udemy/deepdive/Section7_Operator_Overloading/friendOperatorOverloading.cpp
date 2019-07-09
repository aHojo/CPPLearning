/* Friend Operator Overloading */

#include <iostream>

class Complex
{
    private:
        int real;
        int imaginary;

    public:

        Complex(int r = 0,  int i = 0)
        {
            real = r;
            imaginary = i;
        }
    // Can olny add int and floats, so you need to overload to add objects.
    void display()
    {
        std::cout << real << "+i" << imaginary;
    }
    friend Complex operator+(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2){
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.imaginary = c1.imaginary + c2.imaginary;
        return temp;
    }

int main()
{

    Complex c1(3, 7);
    Complex c2(5, 4);
    Complex c3;


    // This is the operator overloaded --
    // c3 = c1.operator+(c2);
    c3 = c1+c2;
    c3.display();
}