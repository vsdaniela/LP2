#include <iostream>
using namespace std;

bool Binary_Search(int *a, int n, int x){

    int i=0;
    int j=n-1;
    int m;
    while(i<=j){
        m=(i+j)/2;
        if(a[m]==x){
            return true;
        }
        if(a[m]>x){
            i=m-1;
        }
        else{
            j=m+1;
        }
    }
    return false;
}
bool b_s(int *a, int i, int j, int x){
    int m=(i+j)/2;
    if(x==a[m]){//en caso de que se encuentre a la primera en la mitad
        return true;
    }
    else if(x<a[m]){
        return b_s(a,i,m-1,x);//al superior se le da mitad menos 1 para buscar en la partr izquierda ya que es menor
        //y vuelve a entrar a la funcion y pasar� las mismas condiciones otra vez
    }
    else{
        return b_s(a,m+1,j,x);//a este se le da la parte derecha ya que es mayor y busca en ese rango
    }
    //return false;
}
int main(){
    int a[5]={1,2,3,4,5};
    cout<<Binary_Search(a,5,4);
    //  cout<<b_s(a,0,5,4);
}
