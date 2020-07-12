#include "iostream"
#include "string.h"

using namespace std;

struct student
{
    int roll_no;
    string names;
    int phone_number;
};
int main()
{
    struct student stud[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"student"<<i+1<<endl;
        cout<<"enter roll no"<<endl,
        cin>>stud[i].names;
        cout<<"enter phone number"<<endl;
        cin>>stud[i].phone_number;
    }


}

