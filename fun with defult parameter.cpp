
#include<iostream>
using namespace std;
int add(int a=10,int b=20)
{
    return (a+b);
}
int main()
{
    int x=5,y=6,z;
    z=add(x,y);
    cout<<"z = "<<z<<endl;
    z=add(x);
    cout<<"z = "<<z<<endl;
    z=add();
    cout<<"z = "<<z<<endl;
    return 0;
}
