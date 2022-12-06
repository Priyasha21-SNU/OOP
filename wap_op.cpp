#include<iostream>
#include<string>
using namespace std;
class inti{
    int a;
    public:
    inti(){
        a=0;
    }
    void get_data_in()
    {
        cout<<"enter number :";
        cin>>a;
    }
    void put_data_in(){
        cout<<"the answer is: "<<a;
    }
    inti operator+(inti aa){
        inti a1;
        a1.a=a+aa.a;
        return a1;
    }
};
class f{
    float a;
    public:
    f(){
        a=0;
    }
    void get_data_f()
    {
        cout<<"enter number :";
        cin>>a;
    }
    void put_data_f(){
        cout<<"the answer is: "<<a;
    }
    f operator+(f aa){
        f a1;
        a1.a=a+aa.a;
        return a1;
    }
};
int main()
{
    inti x,y,z;
    f x1,y1,z1;
    x.get_data_in();
    y.get_data_in();
    z=x+y;
    z.put_data_in();
    x1.get_data_f();
    y1.get_data_f();
    z1=x1+y1;
    z1.put_data_f();
    return 0;
}
