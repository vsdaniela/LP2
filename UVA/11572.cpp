#include <iostream>
#include <set>
#include <stdio.h>
using namespace std;

int main()
{
    int n_c; int n; int sf;
    set <int> snowflakes;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>sf;
        snowflakes.insert(sf);
    }
    printf("\n %i ",snowflakes.size());

    return 0;
}
