//static data member
//static member function
#include<iostream>
using namesapce std;
class demo {
    int x,y;
    static int z;
    public:
        void get_data();
        void put_data();

};
void get_data(int a,int b){
    x=a;
    y=b;
    z=z+1;
}
void put_data()
{
    cout<<"x =: "x<< endl<<"y= :"<<y;

}
int demo::z;
int main()
{
    demo aa,demo bb;
    aa.get_data(5,10);
    bb.get_data(20,30);
    aa,put_data();
    return 0;

}