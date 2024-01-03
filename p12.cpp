#include<iostream>


using namespace std;

int main()
{

   //selection switch structure//
   int age;
   cout<<"Tell me your age"<<endl;
   cin>>age;
   switch(age)
   {
    case 18:
       //code/
       cout<<"You are 18"<<endl;
       break;
    case 22:
       //code/
       cout<<"You are 22"<<endl;
       break;
    case 2:
       //code/
       cout<<"You are 2"<<endl;
       break;

    default:
       cout<<"No special cases"<<endl;
       break;
   }
   cout<<"done with switch case";
   return 0;
}
