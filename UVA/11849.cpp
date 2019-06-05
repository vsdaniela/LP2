#include <set>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    set <int> cd_jk;
    int n; int m; int x;
    while(cin>>n && n!=0 && cin>>m && m!=0){
        for(int i=0;i<n+m;i++){
            cin>>x;
            cd_jk.insert(x);
        }
        printf("\n%i ",(n+m)-cd_jk.size());
        printf("\n");
    }
    return 0;
}
