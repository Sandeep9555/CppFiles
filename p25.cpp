#include<iostream>


using namespace std;

int add(int a, int b)
{   
    cout<<"Using Function with two Arguement"<<endl;
    return a+b;
    
}

int add(int a, int b,int c)
{   
    cout<<"This function with three arguement"<<endl; 
    return a+b+c;
}

//calculate the volume of a cylender
int volume(double r, int h)
{
    return (3.14*r*r*h); 
}

//calculate the volume of the cube
int cube(int a){
    return a*a*a;
}
//rectengualer box
int voloume(int l,int b,int h)
{
    return (l*b*h);
}

int main()
{

    //Function OverLoading
    cout<<"The sum of 3 and 6 is"<<add(3,6)<<endl;
    cout<<"The sum of r,7,6"<<add(3,7,6)<<endl;
    cout<<"The volume of cuboid of 3,7 and 6 is"<<volume(3,7)<<endl;
    cout<<"The vakue of cylinder of radius 3 and 6 is"<<voloume(3,7,6)<<endl;
    cout<<"The vakue of cylinder of radius 3 and 6 is"<<cube(3)<<endl;
    return 0;

}