#include<iostream>
#include<math.h>
using namespace std;
class complex{
private:
    double re,im;
public:
    //parameterized constructor
    complex(double real,double imag):
        re(real),im(imag)
        {}
    double norm()
    {
        return sqrt(re*re+im*im);

    }
    void print()
    {
        cout<<"i"<<re<<"+j"<<im<<"="<<endl;
        cout<<norm()<<endl;

    }

    };
    int main()
    {
        complex c(4.2,5.3);
        c.print();
        return 0;

    }
