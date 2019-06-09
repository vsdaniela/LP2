#ifndef SELECTION_S
#define SELECTION_S
#include "P_sort.h"
template <class T>
class Selection_s: public P_sort <T>
{
    private:

    public:
        void SORT(T* &a, const size_t &n);
};
template <class T>
void Selection_s<T>::SORT(T* &a, const size_t &n)
{
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
#endif // SELECTION_S

