#include<iostream>
using namespace std;
int main()
{
    int a,b,t;
    cin>>a;
    cin>>b;
    t=a;
    a=b;
    b=t;
    cout<<"after swap  :";
    cout<<a<<" , ";
    cout<<b;
    return 0;

}
