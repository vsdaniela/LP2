#include <iostream>
using namespace std;
int main(){
    int a=2;
    int b=4;
    cout<<"a= "<<a<<"b= "<<b<<endl;
    b=a+b;
    a=a-b;
    a=a+b;
    cout<<"a= "<<a<<"b= "<<b<<endl;
    int c=5;
    int d=7;
    cout<<"c= "<<c<<"d= "<<d<<endl;
    d=c*d;
    c=d/c;
    d=d/c;
    cout<<"c= "<<c<<"d= "<<d<<endl;
}
