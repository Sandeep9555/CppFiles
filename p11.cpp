#include<iostream>

using namespace std;



int main()
{
   
   int age;

   cout<<"Tell me your age"<<endl;
   cin>>age;
   if((age<18) &&(age>0))
   {

       cout<<"You can not come to my party ";

   }
   else if (age==18)
   {

       cout <<"you are a kid and you will get a pass to the party"<<endl;
   }
   else{

       cout<<"you will come to the party";
   }
   return 0;



}