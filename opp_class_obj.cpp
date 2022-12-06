#include<iostream>
using namespace std;
class oddeven{
    int a;
    public:
        void get_data();
        void put_data();
};
void oddeven::get_data()
{
    cout<<"enter number:  "<<endl;
    cin>>a;//g++ opp_class_obj.cpp -o a
}
void oddeven:: put_data()
{
    if(a%2==0)
        cout<<"even"<<endl;
    else
        cout<<"odd"<<endl;
}
//object
int main()
{
    oddeven aa;
    aa.get_data();
    aa.put_data();
    return 0;
}