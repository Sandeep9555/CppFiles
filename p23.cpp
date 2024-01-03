#include<iostream>


using namespace std;

int product(int a, int b)
{
    return a*b;
}

int moneyRecieved(int currentMoney, float factor=1.04)
{
    return currentMoney*factor;

}
//int strlen(const char* p)
//{

//}
int main()

{

    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    int money=100000;
    cout<<"if you have "<<money<<"Rs in your bank"<<moneyRecieved
    (money)<<" Rs after 1 year";
    //cout<<"The product of a and b is :"<<product(a,b)<<endl;

    return 0;
}