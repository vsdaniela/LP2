#include <iostream>

using namespace std;
int main(){

    int a[5]={3,5,2,1,6};
    int i,j,a,x,k_num;
    for(i=0;i<a.size;i++){
        for(j=0;j<a.size;j++){
            if(a[j]>a[j++]){
                x=a[j];
                a[j]=a[j++];
                a[j++]=x;
            }
        }
    }
    cin>>k_num;
    cout<<a[k_num-1];

}
