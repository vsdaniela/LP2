#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main(){

    int n_books, precio, dinero_Peter;
    cin>>n_books;
    int A_precios[n_books];
    for(int i=0;i<n_books;i++){
        cin>>precio;
        A_precios[i]=precio;
    }
    cin>>dinero_Peter;
    int i_menor=A_precios[0];
    int j_menor=A_precios[1];
    for(int i=0;i<n_books;i++){
        for(int j=i+1;j<n_books;j++){
            if((A_precios[i]+A_precios[j])==dinero_Peter){
                if(abs(A_precios[i]-A_precios[j]) < abs(i_menor-j_menor)){
                    i_menor=A_precios[i];
                    j_menor=A_precios[j];
                }
            }
        }
    }

    cout<<"Peter should buy books whose prices are "<<i_menor<<" and "<<j_menor<<"."<<endl;

}
