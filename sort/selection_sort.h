#include <iostream>
using namespace std;

void selection_sort(int* a,int n){
    int aux,menor_pos;
    for(int i=0;i<n;i++){
        menor_pos=i;
        for(int j=i+1;j<n;j++){
            if(a[menor_pos]>a[j]){
                menor_pos=j;
            }
        }
        aux=a[i];
        a[i]=a[menor_pos];
        a[menor_pos]=aux;
    }
}
