#include<iostream>
#include<string>

using namespace std;
class Employeee
{ 
    int id;
    static int count;
    public:
    void setData(void)
    {
        cout<<"Enter the id"<<endl;
        cin>>id;
    }
    void getData()
    {
        cout<<"THE id of this Employee is"<<id<<endl;
    }

};

int Employeee ::  count;//
int main()
{
    Employeee sandeep, rohan, lovish;
    sandeep.setData();
    sandeep.getData();

    rohan.setData();
    rohan.getData();

    lovish.setData();
    lovish.getData();
    return 0;
}