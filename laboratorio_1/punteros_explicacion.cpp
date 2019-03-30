#include <iostream>
using namespace std;


int main(){
    int *q;
    const int *const p = q = new int(5);
    cout<<*p<<endl;//5
    cout<<p<<endl;//dirección
    const int& a = *p;
    cout<<a<<endl;//su valor es 5
    cout<<&a<<endl;//accede a la dirección de memoria
    cout<<*q<<endl;
    *q=24;
    cout<<*p;


}
