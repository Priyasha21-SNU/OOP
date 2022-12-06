#include<iostream>
using namespace std;
int fun(int a=10)
{
    return (a);
}
int main()
{
    int x=5,y;
    y=fun(x);
    cout<<"y = "<<y<<endl;
    y=fun();
    cout<<"y = "<<y<<endl;
    return 0;
}
