#include <iostream>
#include <set>
#include <stdio.h>
using namespace std;

int main()
{
    long  n; unsigned long long b; unsigned long long n_b; int t_p=0;
    multiset <int> bills;
    set<int>::iterator it;
    set<int>::iterator it_2;
    //cin>>n;
    while(cin>>n){//5
        cin>>n_b;
        for(int i=0;i<n_b;n_b++){
            cin>>b;
            bills.insert(b);
        }
        it=bills.begin();
        it_2=bills.end();
        t_p=t_p+(*it_2-*it);
        bills.erase(it,it_2);
    }
    printf("\n %i", t_p);
    return 0;
}
