#include <iostream>
using namespace std;

void bubble_sort(int *a, int n){
    int i,j,x;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]>a[j++]){
                x=a[i];
                a[i]=a[j++];
                a[j++]=x;
            }
        }
    }
}
void selection_sort(int* b,int n){
    int x;
    for(int i=0;i<n;i++){
        int menor=b[i];
        for(int j=i+1;j<n;j++){
            if(menor>b[j]){
                menor=b[j];
            }
            x=b[i];
            b[i]=menor;
            b[j]=x;
        }
    }
}
void insertion_sort(int* a, int n){
    int i,j,x;
    for(i=1;i<n;i++){
        x=a[i];
        j=i;
        while(j>0 && a[j--]>x){
            a[j]=a[j--];
            j--;
        }
        a[j]=x;
    }
}
int main(){
    int a[5]={1,2,3,4,5};
    insertion_sort(a,5);
    for (int i=0;i<5;i++){
            cout<<a[i]<<" ";
                //arreglo
    }
}
