#include<iostream>

using namespace std;
//recursion
int factorial(int n)
{   
    
    if(n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);  
}
int fib(int n)
{   
    if(n<2)
    {
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
int main()
{
    //Factorial of a number//
     int a;
     cout<<"Enter a number";
     cin>>a;
     cout<<"The factorial "<<a<<" is"<<factorial(a)<<endl;
     cout<<"The term in fibonacci sequence at position"<<a<<"is"<<fib(a)<<endl;
     return 0;
}