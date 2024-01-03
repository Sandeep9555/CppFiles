#include<iostream>

 using namespace std;


 int main(){

     int a=9,b=5;
     //arithmetic operator

     cout<<"The value of a+b is :"<<a+b<<endl;
     cout<<"The value of a-b is :"<<a-b<<endl;
     cout<<"The value of a*b is :"<<a*b<<endl;
     cout<<"The value of a/b is :"<<a/b<<endl;
     cout<<"The value of a%b is :"<<a%b<<endl;
     cout<<"The value of a++ is :"<<a++<<endl;
     cout<<"The value of ++a is :"<< ++a<<endl;
     cout<<"The value of b++ is :"<< b++ <<endl;
     cout<<"The value of ++b is :"<< ++b <<endl;
     cout<<endl;
     cout<<endl;
     cout<<endl;


      cout<<"assignment operator";
     //assignment operator
     cout<<"The value of a==b"<<(a==b)<<endl;
     cout<<"The value of a!=b"<<(a!=b)<<endl;
     cout<<"The value of a>=b"<<(a>=b)<<endl;
     cout<<"The value of a<=b"<<(a<=b)<<endl;
     cout<<"The value of a>b"<<(a>b)<<endl;
     cout<<"The value of a<b"<<(a<b)<<endl;
     cout<<endl;
     cout<<endl;
     cout<<endl;
     cout<<endl;
    

    cout<<"logical operator"<<endl;
    cout<<"The value of logical and operator is :"<<((a==b)  &&  (a<b))<<endl;
    cout<<"The value of logical or  operator is  :"<<((a==b)  ||  (a<b))<<endl;
    cout<<"The value of logical not operator is  :"<<(!(a==b))<<endl;

     return 0;
 }