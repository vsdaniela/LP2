#include <iostream>
using namespace std;
int potencia(int b, int e){
    int i=0;
    int long r_s=1;
    if(e==0){
        return 1;
    }
    else if(e%2==0){
        e=e/2;
        while(i<e){
            r_s=r_s*b;
            i++;
        }
        return r_s*r_s;
    }
    else{
        e=e/2;
        while(i<e){
            r_s=r_s*b;
            i++;
        }
        return r_s*r_s*b;
    }
}
int main(){
    int base,exp;
    while(cin>>base && cin>>exp){
        cout<<potencia(base,exp)<<endl;
    }

}
