#include <iostream>
#include <string>

using namespace std;

class Employee
{
    int id;
    int salery;

public:
    void setId(void)
    {
        cout << "Enter the id of Employee";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this employee is" << id << endl;
    }
};
int main()
{

    Employee harry, rohan, lovie, shruti;
   // harry.setId();
    //harry.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}