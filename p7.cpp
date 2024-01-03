#include<iostream>
 using namespace std;
  int c=50;
 int main()
 {
     /*****bulit in data types
   /*int a,b,c;
   cout<< "enter the value of a :"<<endl;
   cin>>a;
   cout<<"enter the value of b :"<<endl;
   cin>>b;
   c=a+b;
   
   cout<< "the sum is c"<<c <<endl;
   cout<< "the global c  is c"<< ::c;*/
   
   //*********** Float,Double ,long Double Literals;
   /*float d=34.4f;
   long double e=34.4l;
   cout<<"the value of d is "<<d<<endl<<" the value of e is "<<e;  
   cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
   cout<<"The size of 34.4 is "<<sizeof(34.4f)<<endl;
   cout<<"The size of 34.4 is "<<sizeof(34.4F)<<endl;
   cout<<"The size of 34.4 is "<<sizeof(34.4l)<<endl;
   cout<<"The size of 34.4 is "<<sizeof(34.4L);*/
    

    //*** Reference Variable//
    // Shubham-->shubh-->
    //float x=455;
    //float &y = x;
    //cout<<x<<endl;
    //cout<<y<<endl;
    int a=45;
    float b=56.56;
    cout<<"The value of a is " <<a;   
    cout<<"The value of b is " <<int(b); 
    int c = int (b);

    cout <<"The expression is "<<a+b<<endl;
    cout <<"The expression is "<<a+ int(b)<<endl;
    cout <<"The expression is "<<a+(int)b<<endl;

    return 0;
  
   }
