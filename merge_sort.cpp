#include <iostream>
using namespace std;
int a[8];
void Merge(int *A,int i,int m, int j)
{
    int siz=(j-i)+1;
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
    for(int i=0;i<8;i++){
        cout<<A[i]<<" ";
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
    int A[8]={3,6,1,9,7,3,10,5};

    merge_sort(A,0,8);


}
