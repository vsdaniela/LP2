#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;

int main()
{
    int x=0; string tt; double t=0;
    map<string,int> trees;
    while(cin>>tt && s!= "_"){
        trees[tt]++;
        t++;
    }
    for(map<string,int>::iterator it=trees.begin();it!=trees.end();it++){
        printf("%s %.4f\n",(*it).first.data(),(*it).second*100/t);
    }

    return 0;
}
