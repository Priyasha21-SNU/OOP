#include<iostream>
#include<string>
using namespace std;
class stringg{
    private:
        char* str;
        int length;
    public:
        stringg(){
            strcpy(str," ");
        }
        stringg(char *s[]){
            strcpy(str,s);
        }
        void display(char str){
            cout<<str;
        }
        stringg operator+(str ss){
            stringg tmp;
            if(strlen(str)+strlen(str,ss)<length)
            {
                strcpy(tmp.str,str);
                strcat(tmp.str,ss.str);
            }
            else
                cout<<"overflow";
                exit(1);
            return tmp;
        }

};
int main(){
    stringg *s1;
    stringg *s2;
    stringg *s3;
    s1="priyasha";
    s2="singha";
    s3=s1+s2;
    s3.display();
    return 0;
}
