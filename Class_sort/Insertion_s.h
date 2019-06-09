#ifndef INSERTION_S
#define INSERTION_S
#include "P_sort.h"
template <class T>
class Insertion_s: public P_sort<T>
{
    private:

    public:
        void SORT(T* &a, const size_t &n);

};
template <class T>
void Insertion_s<T>::SORT(T* &a, const size_t &n)
{
    int pos, aux;
    for (int i=0;i<n;i++){
        pos=i;
        aux=a[i];
        while(pos>0 && a[pos-1]>aux){
            a[pos]=a[pos-1];
            pos--;
        }
        a[pos]=aux;
    }
}
#endif // INSERTION_S

