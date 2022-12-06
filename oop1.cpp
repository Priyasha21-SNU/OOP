#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gen;
    

    void printinfo(){

    }
};
int main(){
     student arr[3];
     for(int i=0;i<3;i++){
        cout<<"name= ";
        cin>>arr[i].name;
        cout<<"age= ";
        cin>>arr[i].age;
        cout<<"gen= ";
        cin>>arr[i].gen;
     }
    for(int i=0;i<3;i++){
        arr[i].printinfo();
    }

    return 0;
}