#include<iostream>
using namespace std;
class shape{
    private:
        int side,height,length,width,rad;
    public:
        shape(){
            side=height=length=width=rad=0;
        }
         void volume(int s)
         {
            this->side=s;
             int cube_volume=(s*s*s);
            cout<<"the volume of cube :"<<cube_volume<<endl;
         }
         void volume(int r,int h){
            this->rad=r;
            this->height=h;
            int cilender_volume=3.14*(r*r)*h;
            cout<<"the volume of cylinder :"<<cilender_volume<<endl;
         }
         void volume(int h,int w,int len){
            this->height=h;
            this->width=w;
            this->length=len;
            int rec_volume=(h*w*len);
            cout<<"the volume of box: "<<rec_volume<<endl;
         }

};
int main(){
    shape A;
    A.volume(2);
    A.volume(2,3);
    A.volume(2,5,3);
    return 0;
}