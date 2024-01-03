#include<iostream>


using namespace std;

struct emp
{
    /*data*/
    int etd;
    char favChar;
    float salery;

};
 
 union money
 {
    
    int rice;
    char car;
    float pounds;

 };
int main()
{
   
   
enum Meal{breakfast,lunch,dinner} ;

Meal m1=lunch;
cout<<breakfast;
cout<<lunch;
cout<<dinner;   /*struct emp harry;
    struct emp shubham;
    union money m1;
    m1.rice=34;
    cout<<m1.rice;
    harry.etd = 1;
    harry.favChar= 'c';
    harry.salery=9000000.0;
    cout<<"The value is"<<harry.salery<<endl;
    cout<<"The value is"<<harry.etd<<endl;
    cout<<"The value is"<<harry.favChar<<endl;*/

     return 0;
}