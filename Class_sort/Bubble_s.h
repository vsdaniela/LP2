#ifndef BUBBLE_S
#define BUBBLE_S
#include <iostream>
#include "P_sort.h"
using namespace std;
template <class T>
class Bubble_s: public P_sort <T>
{
    private:

    public:
        void SORT(T* &a, const size_t &n);
};
template <class T>
void Bubble_s<T>::SORT(T* &a, const size_t &n)
{
    int aux;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(a[i]>a[j]){
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }

}
#endif // BUBBLE_S
