#include <iostream>
using namespace std;
void Merge(int *A,int i,int m, int j)
{
    int siz=(j-i)+1;
    int a[siz];
    int x=i;
    int y=m+1;
    int k=0;
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
    while(x<=m){
        a[k]=A[x];
        k++;
        x++;
    }
    while(y<=j){
        a[k]=A[y];
        k++;
        y++;
    }
    for(int z=x;z<=siz;z++){
        A[z]=a[z];
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

int main()
{
    int A[8]={2,6,1,9,7,3,10,5};
    merge_sort(A,0,8);
    for(int i=0;i<8;i++){
        cout<<A[i]<<" ";
    }

}
