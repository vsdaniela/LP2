#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include "P_sort.h"
#include "Selection_s.h"
#include "Bubble_s.h"
#include "Insertion_s.h"
#include "Merge_.h"
using namespace std;
int* TA;
int* TB;
bool test_sort(P_sort<int>* sort_,const int* A,int n)
{
    memcpy(TA,A,sizeof(int)*n);
    memcpy(TB,A,sizeof(int)*n);
    clock_t t=clock();
    sort_->SORT(TA,n);//your sort
    float time=float(clock()-t)/CLOCKS_PER_SEC;
    std::sort(TB,TB+n);
    for(int i=0;i<n;i++){
        if(TA[i]!=TB[i]){return false;}
    }
    cout<<time<<" ";
    return true;
}

int main()
{
    srand(time(NULL));
    int long N=100000;
    int *A=new int[N];
    TA=new int[N];
    TB=new int[N];
    P_sort<int>* sort[4]={new Bubble_s<int>,new Selection_s<int>, new Insertion_s<int>, new Merge_<int>};
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
    delete [] sort;
    return 0;
}
