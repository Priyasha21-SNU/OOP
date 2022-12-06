#include<iostream>
using namespace std;
int init_m1(int m)
{
    cout<<"init_m1: "<<m<<endl;//function to init m1
    return m;
}
int init_m2(int m)
{
    cout<<"init_m2: "<<m<<endl;//function to init m2
    return m;
}
class string{
    char *str;
    size_t len;
    public:
        string(char *s):str(strdup(s)), len(strlen(str))
};
