#include<iostream>


using namespace std;

// Function prototype// 
int sum(int a,int b);
int main()
{
   int num1,num2;
   //-->num1, num2 are actual parameters//
   cout<<"Enter the First Number"<<endl;
   cin>>num1;
   cout<<"Enter the Second no"<<endl;
   cin>>num2;
   cout<<"The sum is"<<sum(num1,num2);


   return 0;

}
int sum(int a,int b)
// a and b are formal parameters//
{

int c=a+b;
return c;
    
}