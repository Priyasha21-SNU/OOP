#include<iostream>
using namespace std;
class matrix{
private:
    int x[10][10];
    int row,col;
public:
    matrix();
   // matrix(int r,int c);
    void getmatrix(int r,int c);
    void putmatrix();
     //int matrix mult();
    matadd(matrix m2);
     matrix()
     {
         this->row=0;
         this->col=0;
     }
};
    void matrix::getmatrix(int r,int c){
        this->row=r;
        this->col=c;
        matrix m1;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<"enter x["<<i<<"]["<<j<<"] :";
                cin>>x[i][j];
            }
        }
        }
    void matrix::putmatrix()
    {
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<x[i][j];
            }
            cout<<"\n";
        }
    }
     matrix::matadd(matrix m2){
        matrix m;
        m.row=row;
        m.col=col;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                m.x[i][j]=x[i][j]+m2.x[i][j];
            }
        }
        return m;


        }


int main(){
    matrix m1,m2,m3;
    m1.getmatrix(2,2);
    m2.getmatrix(2,2);
    m1.putmatrix();
    cout<<endl;
    m2.putmatrix();
    m3=m1.matadd(m2);
    m3.putmatrix();

return 0;
    }
