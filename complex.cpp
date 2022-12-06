#include<iostream>
using namespace std;
//no return type in constructor
class complex{
    int real;
    int imag;
    public:
        void get_data();
        void put_data();
       complex (int m ,int n){
        real=m;
        imag=n;
       }
/*void  complex::get_data()
{
    cout<<"enter data: ";
    cin>>real>>imag;
}
void complex::put_data()
{
    cout<<real<<"+j"<<imag;
}*/

};
void  complex::get_data()
{
    //cout<<"enter data: ";
    //cin>>real>>imag;
}
void complex::put_data()
{
    cout<<real<<"+j"<<imag;
}

int main()
{
    complex aa(10,20);
     //cout<<"enter data"<<endl;
    //aa.get_data();
    aa.put_data();
    return 0;
}