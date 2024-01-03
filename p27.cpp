#include<iostream>

using namespace std;

class employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setdata(int a1, int b1,int c1);
        void getdata()
        {
            cout<<"THe value of a is :"<<a<<endl;
            cout<<"THe value of a is :"<<b<<endl;
            cout<<"THe value of a is :"<<c<<endl;
            cout<<"THe value of a is :"<<d<<endl;
            cout<<"THe value of a is :"<<e<<endl;

        }

};
void employee:: setdata(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;

}
int main()
{
    employee sandy;
    sandy.d=10;
    sandy.e=20;
    
    sandy.setdata(1,3,6);
    sandy.getdata();
    return 0;
}