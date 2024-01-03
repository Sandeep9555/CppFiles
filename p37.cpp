#include<iostream>

using namespace std;

class Complex
{    
    int a,b;
    public :
    //Creating a constructor
    //Constructor is a special member function with same name as of  the  class.
    //it is automatically invoked;
    //it is used to initialize the objects of the class
    Complex(void);// constructor declearation
    void printdata()
    {
        cout<<"Your number is"<< a <<"+"<< b <<"i" << endl;

    }
};

Complex ::Complex(void)//This is default constructor
// its take no parremeter
{
    a=10;
    b=0;
}
int main()

{
    Complex c1,c2,c3;
    c1.printdata();
    c2.printdata();
    c3.printdata();


    return 0;
}