#include <iostream>
#include <cstring>
#define N 100000
using namespace std;
int P[N];
unsigned long long int prime(unsigned long long int  n)
{
    int B[N];
    memset(B,0,sizeof(int)*N);
    int q=0;
    for(unsigned long long int i=3;i<n;i+=2){
        if(!B[i]){
            P[q++]=i;
            for(unsigned long long int j=i*i;j<n;j+=2*i){
                B[j]=1;
            }
        }
    }
    return q;
}
int main()
{
    unsigned long long int n,a,b;
    int d_m=0;
    unsigned long long c=prime(N);
    while(cin>>n){
        a=0;
        b=0;
        d_m=0;
        for(int i=0;i<c;i++){
            for(int j=c;j>0;j--){
                if(P[j]+P[i]==n && P[j]-P[i]>d_m){
                    d_m=P[j]-P[i];
                    a=P[i];
                    b=P[j];
                }
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
