#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class stringg{
    private:
        char str;
        int length;
    public:
        stringg(){
            this->str=NULL;
        }
        stringg(char s){
            this->str=s;
        }
        void display(){
            cout<<str;
        }
        stringg operator+(stringg ss){
            stringg tmp;
            if(strlen(str)+strlen(str,ss)<length)
            {
                strcpy(tmp.str,str);
                strcat(tmp.str,ss.str);
            }
            else{
                cout<<"overflow";
                exit(1);
            }
            return tmp;
        }

};
int main(){
    stringg s1;
    stringg s2;
    stringg s3;
    s1="priyasha";
    s2="singha";
    s3=s1+s2;
    s3.display();
    return 0;
}
