#include <iostream>
using namespace std;
void Merge(int *A,int i,int m, int j)
{
    int siz=(j-i)+1;
    int a[siz];
    int x=i;
    int y=m+1;
    while(x<=m && y<=j){
        if(A[x]<A[y]){
            a[k]=A[x];
            k++;
            x++;
        }
        else{
            a[k]=A[y];
            k++;
            y++;
        }
    }
    while(i<=m){
        a[k]=A[x];
        k++;
        x++;
    }
    while(y<=j){
        a[k]=A[y];
        k++;
        y++;
    }
    for(int z=i;z<=j;z++){
        A[z]=a[z-i];
    }

}
void merge_sort(int *A,int i,int j)
{
    if(i==j){return;}
    int m=(i+j)/2;
    merge_sort(A,i,m);
    merge_sort(A,m+1,j);
    Merge(A,i,m,j);
}
