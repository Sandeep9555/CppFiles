#include <iostream>

using namespace std;
// Forwar Declearation
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumComplex(Complex, Complex);
    int sumComComplex(Complex, Complex);
};
class Complex
{
    int a, b;
    // Indivisually declarating as friends
    // friend int Calculator ::sumComplex(Complex o1, Complex o2);
     //friend int Calculator ::sumComComplex(Complex o1, Complex o2);
    // Alter :Declarating the entire calculating class as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is :" << a << " + " << b << " i " << endl;
    }
};

int Calculator::sumComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator::sumComComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 3);
    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumComplex(o1, o2);
    cout << "The sum of real part of o1 and  o2 is: " << res << endl;
    int resc = calc.sumComComplex(o1, o2);
    cout << "The sum of comp part of o1 and  o2 is: " << resc << endl;
    return 0;
}