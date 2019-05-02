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
        cout<<x*y;
        /*int* matriz;
        matriz= new int[4];
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                matriz[j*2+i]=1;
            }
        }
        Matrix <int> ma(matriz);*/
        return 0;
}
