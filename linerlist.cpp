#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
class linear{
    protected:
        array<int,4>arr;
        int item,pos;
    public:
         virtual void insertion(int i,int p);
         virtual void del(int p);
         virtual void sorting();
         virtual void searching(int i);
 };
 class L:public linear{
     public:
         void insertion(int i,int p);
         void del(int p);
         void sorting();
         void searching(int i);
    };
     void virtual linear::insertion(int i,int p){
         s=arr.size();
         for(int j=0;j<s;j++){
            e=arr.at(p);
         }
         for(int j=0;j<s;j++){
            cout<<j<<" "<<endl;
         }
        }
int main(){

    }
