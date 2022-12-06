#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
int main()
{
    char str[10]="ABCDE";
    stack<char>s;
    int i;
    for(i=0;i<strlen(str);i++)
        s.push(str[i]);

        cout<<"reverse string";
        while(!s.empty()){
            cout<<s.top();
            s.pop();
        }
        return 0;

    }

