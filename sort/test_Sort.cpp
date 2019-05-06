#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include "bubble_sort.h"
#include "insertion_sort.h"
#include "selection_sort.h"

using namespace std;
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
    while(y<=y){
        a[k]=A[y];
        k++;
        y++;
    }
    for(int z=x;z<siz;z++){
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
int* TA;
int* TB;
typedef void (*fun_sort)(int*, int);
bool test_sort(fun_sort sort,const int* A,int n)
{
    memcpy(TA,A,sizeof(int)*n);
    memcpy(TB,A,sizeof(int)*n);
    clock_t t=clock();
    sort(TA,n);//your sort
    float time=float(clock()-t)/CLOCKS_PER_SEC;
    std::sort(TB,TB+n);
    for(int i=0;i<n;i++){
        if(TA[i]!=TB[i]){return false;}
    }
    cout<<time<<" ";
    return true;
}

int main(){
    srand(time(NULL));
    int long N=100000;
    int *A=new int[N];
    TA=new int[N];
    TB=new int[N];
    fun_sort sort[4]={bubble_sort,selection_sort,insertion_sort,merge_sort};
    for(int n=100;n<=N;n*=10)
    {
        for(int i=0;i<n;i++){
            A[i]=rand()%n;
        }
        for(int s=0;s<4;s++){
            if(!test_sort(sort[s],A,n)){
               cout<<"Fail\n";
               return 0;
            }
        }
        cout<<endl;
    }

    delete[] TA;
    delete[] TB;
}
