#include <iostream>
#include <cstring>
using namespace std;
int P[100000];
unsigned long long int prime(unsigned long long int & n)
{
    int B[100000];
    memset(B,0,sizeof(int)*100000);
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
    //while(cin>>n && n<1000000 && n>=6){
    cin>>n;
    prime(n);
    for(int i=0;i<=n;i++){
        for(int j=prime(n);j>=0;j--){
            if(P[i]+P[j]==n && P[j]-P[i]>d_m){
                d_m=P[j]-P[i];
                a=P[i];
                b=P[j];
            }
        }
    }
    cout<<a<<" "<<b<<endl;
    //}
    return 0;
}
