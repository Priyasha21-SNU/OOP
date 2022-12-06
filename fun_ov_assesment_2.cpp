#include<iostream>
using namespace std;
class CADD{
    private:
        char a,b;
    public:
        char* add(char x,char y){
            this->a=x;
            this->b=y;

            cout<< " 1st :"<<add('x','y')<<endl;
            //return z;
        }
};
int main()
{
    CADD a;
    a.add(2,3);
    return 0;
}
