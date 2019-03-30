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
void bubble_sort(int *a,int n)
{
       int aux;
       for(int i=0;i<n-1;i++)
       {
           for(int j=i+1;j<=n-1;j++)
           {
               if(a[i]>a[j]){
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
               }
           }
       }
}
void insertion_sort(int *a,int n)
{
    int pos, aux;
    for (int i=0;i<n;i++)
    {
        pos=i;
        aux=a[i];
        while(pos>0 && a[pos-1]>aux){
            a[pos]=a[pos-1];
            pos--;
        }
        a[pos]=aux;
    }
}
int main(){

    int a[5]={3,2,89,4,5};
    //selection_sort(a,5);
    //bubble_sort(a,5);
    insertion_sort(a,5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }

}
