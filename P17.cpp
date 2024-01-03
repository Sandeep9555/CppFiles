#include<iostream>

using namespace std;


int main()
{

    int a=3;
    int* b=&a;
    cout<<"the adress of a is "<< &a<< endl;
    cout<<"the  adress of a is"<<b<<endl;
    

    //dereference operator is
    cout<<"The value at adress b is"<<*b<<endl;
    return 0;
}