#include <iostream>

class Complex
{
    private:
        double real, imag;
    public:
        Complex(double real, double imag);

        Complex operator+(const Complex& rhs) const;
        Complex operator-(const Complex& rhs) const;

        Complex square();
        double abssqr();

        friend std::ostream& operator<<(std::ostream& os, const Complex& c);
};
