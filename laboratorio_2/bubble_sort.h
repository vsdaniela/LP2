#include <iostream>
using namespace std;

void bubble_sort(int *a,int n)
{
       int aux;
       for(int i=0;i<n-1;i++)
       {
           for(int j=i+1;j<=n-1;j++)
           {
               if(a[i]>a[j]){
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
               }
           }
       }
}
