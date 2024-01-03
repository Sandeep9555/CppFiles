#include<iostream>

using namespace std;

/*int sum(int a, int b)
{

    int c =a+b;
    return c;
       
}*/
// Call By reference using c++ Pointer-->
int swapPointer(int* a, int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
//this will not swap variable
void swap(int a, int b)
{

  int temp=a;
    a=b;
    b=temp;  
}
void swapReferenceVar(int &a, int&b)
{
   

  int temp=a;
    a=b;
    b=temp;  

}


int main()
{
    //cout<<"the sum of 4 and 5 is : "<<sum(4,5);
    int a=4,b=5;
    cout<<"The value of a is :"<<a<<"The value of b is  :"<<b<<endl;
    //swap(a, b);this will not swap and b;
    
    //swapPointer(&a,&b); this will swap a and b using swap reference
   swapReferenceVar(a,b);//this will swap a and b by using reference variable 
    cout<<"The value of a is :"<<a<<"The value of b is  :"<<b<<endl;
    return 0;

}