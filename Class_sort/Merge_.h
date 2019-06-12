#ifndef MERGE_
#define MERGE_
#include "P_sort.h"
template <class T>
class Merge_: public P_sort<T>
{
    private:
        void merge_(T *A,size_t i,size_t m, size_t j);
        void ssort(T *A,size_t i,size_t j);

    public:
        void SORT(T* &a, const size_t &n);
};
#endif // MERGE_
template <class T>
void Merge_<T>::merge_(T *A,size_t i,size_t m, size_t j)
{
    int siz=(j-i)+1; int a[siz]; int x=i; int y=m+1; int k=0;
    while(x<=m && y<=j){
        if(A[x]<A[y]){
            a[k++]=A[x++];
        }
        else{
            a[k++]=A[y++];
        }
    }
    while(x<=m){
        a[k++]=A[x++];
    }
    while(y<=j){
        a[k++]=A[y++];
    }
    for(int z=0;z<siz;z++){
        A[z+i]=a[z];
    }
}
template <class T>
void Merge_<T>::ssort(T *A,size_t i,size_t j)
{
    if(i==j){return;}
    int m=(i+j)/2;
    ssort(A,i,m);
    ssort(A,m+1,j);
    merge_(A,i,m,j);
}
template <class T>
void Merge_<T>::SORT(T* &A, const size_t &n)
{
    ssort(A,0,n-1);

}

