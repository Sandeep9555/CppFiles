#include<iostream>

using namespace std;


int main()
{
   
   int marks[4] ={23,45,56,89};
   int mathMarks[4];
   mathMarks[0]=2278;
   mathMarks[1]=738;
   mathMarks[2]=378;
   mathMarks[3]=578;

   //cout<<"These are math Marks";

   cout<<marks[0]<<endl;
   cout<<marks[1]<<endl;
   cout<<marks[2]<<endl;
   cout<<marks[3]<<endl;

   cout<<"These are math Marks"<<endl;
   cout<<mathMarks[0]<<endl;
   cout<<mathMarks[1]<<endl;
   //you can change the value of the an array
   
   mathMarks[2]=456;
   cout<<mathMarks[2]<<endl;
   cout<<mathMarks[3]<<endl;
   for(int i=0;i<4;i++)
   {
      cout<<"the value of marks"<<i<<"is " <<marks[i]<<endl;  

   }

   //pointers and arrays
   int*p =marks;
   cout<<*(p++)<<endl;
   cout<<*(++p)<<endl;
   cout<<"The Value Of  *p is  "<<*p;
   cout<<"The Value Of  *p+1 is  "<<*(p+1);
   cout<<"The Value Of  *p+2 is  "<<*(p+2);
   cout<<"The Value Of  *p+3 is  "<<*(p+3);
   
   return 0;



}