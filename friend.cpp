#include<iostream>
using namespace std;
class a
{
int oa;
    public:
        void print()
        {
            cout<<"enter number : ";
            cin>> oa;
        }
        friend void add(a,b);
};
class b{
    int ob;
    public:
        void data()
        {
            cout<<"enter number : ";
            cin>> ob;
        }
        friend void add(a,b);
};
void add(a oaa,b obb){
    (oaa.oa+obb.ob);
    cout<<
}
int main()
{
    a obj1;
    b obj2;
    obj1.print();
    obj2.data();
   add(obj1,obj2);
    return 0;
}
