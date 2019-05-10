#include <iostream>
#include "My_vector.h"
using namespace std;


int main()
{
    My_vector <int> x(3);
    for(int i=0;i<3;i++){
        x[i]=8;
    }
    /*cout<<"first size:"<<x.get_size()<<endl;
    x.Push_back(2999);
    cout<<"x[2]: "<<x[2]<<endl;
    x.Push_back(33333);
    cout<<x[1];*/
    My_vector <int> y;
    y=x;
    for(int i=0;i<3;i++){
        cout<<y[i];
    }
    cout<<endl<<y.get_size();



    return 0;
}
