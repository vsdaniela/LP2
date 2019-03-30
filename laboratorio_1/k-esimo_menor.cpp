#include <iostream>

using namespace std;
int main(){

    int a[5]={3,5,2,1,6};
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
    cin>>k_num;
    cout<<a[k_num-1];

}
