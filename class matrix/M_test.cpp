#include <iostream>
#include "Matrix.h"
using namespace std;
int main()
{
        Matrix <int> x(3,3);
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                x(i,j)=1;
            }
        }
        Matrix <int> y(3,3);
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                y(i,j)=2;
            }
        }
        int** a;
        a=new int* [1];
        int i=0;
        a[i]=new int[1];

        for(int i=0;i<1;i++){
            for(int j=0;j<1;j++){
                a[i][j]=0;
            }
        }
        Matrix <int> b(a);
        //Matrix <int> z(x*y);
        //cout<<x+y<<endl;
        //cout<<z;

        //cout<<x+z;

}
