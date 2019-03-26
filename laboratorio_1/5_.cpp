#include <iostream>
using namespace std;
bool is_pal(char*str){
    int i,j;
    i=j=0;
    while(str[j]){j++;}
    j--;
    while(i<j){
        if(str[i]!=str[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;

}
int main(){
    char* palabra;
    cin>>palabra;
    cout<<is_pal(palabra);


}
