#include<iostream>
using namespace std;
class squre{
    int side;
    public:
        squre(){
            side=0;
        }
        squre(int m){
            side=m;
        }
        squre(squre &z){
            side=z.side;
        }
        void input(){
            cout<<"enter the side: ";
            cin>>side;
        }
        void area(){
            int a;
            a=side*side;
            cout<<"the area of the squre is = "<<a;
        }
        void perimeter(){
            int ans;
            ans=4* side;
            cout<<"the perimeter of the squre is = "<<ans;
        }
        ~squre(){
            side=0;
        }

};
int main()
{
    squre aa;
    squre bb(aa);
    //squre cc(bb);

    aa.input();
    aa.area();
    aa.perimeter();
    return 0;

}
