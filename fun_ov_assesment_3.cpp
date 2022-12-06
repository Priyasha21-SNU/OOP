#include<iostream>
using namespace std;
class overload{
private:
        int a;
        float x;
        string m;
public:
    void add(int m,int n){
         /*this->a=m;
        this->b=n;*/
        int z=m+n;
        cout<<"addition of int: "<<z<<endl;
    }
    void add(float m,float n){
        /*his->x=m;
        this->y=n;*/
        float z=m+n;
        cout<<"addition of float: "<<z<<endl;
    }
    overload operator+(overload d){
        overload s;
        s.x=x+d.x;
        return s;
        }
    };
    int main()
    {
        overload aa;
        aa.add(2,3);
        aa.add(2.5,2);
        return 0;
    }
