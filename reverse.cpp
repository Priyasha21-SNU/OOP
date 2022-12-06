
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;//123//321
    int rev;
    while(n>0)
    {
        int last=n%10;
        rev=rev*10+last;
        n=n/10;


    }
cout<<rev;
}

