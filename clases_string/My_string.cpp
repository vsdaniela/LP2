#include "My_string.h"

int My_string::size_ch(const char* x)
{
    int i=0;
    int t=0;
    while(x[i++]!='\0'){
        t++;
    }
    return t;
}
My_string::My_string(const char* w)
{
    int x=size_ch(w);
    str=new char[x+1];
    for(int i=0;i<x;i++){
        str[i]=w[i];
    }
}
My_string::My_string(const My_string& w)
{
    int i=0;
    int siz=0;
    while(w.str[i]){
        i++;
        siz++;
    }
    str = new char[siz+1];
    for(int i=0;i<siz;i++){
        str[i]=w.str[i];
    }
}
int My_string::size_str(My_string x)
{
    int i=0;
    int s=0;
    while(x.str[i]){
        s++;
        i++;
    }
    return s;
}
My_string::~My_string()
{
    delete [] str;
}
bool My_string::operator == (My_string& w)
{
    bool same=true;
    if(size_str(str)!=size_str(w)){
        return false;
    }
    else{
        for(int i=0;i<size_str(str);i++){
            if(str[i]!=w.str[i]){
                same=false;
            }
        }
    }
    return same;
}
My_string My_string::operator + (const My_string& w)
{
    int new_size=size_str(str)+size_str(w);
    My_string new_str=new char[new_size];
    for(int j=0;j<size_str(str);j++){
        new_str[j]=str[j];
    }
    int i=size_str(str);
    int x=0;
    while(x<new_size){
        new_str[i]=w.str[x];
        x++;
        i++;
    }
    return new_str;

}
char & My_string::operator [](const int& i)
{
    return str[i];
}
My_string & My_string::operator =(const My_string& w)
{
    for(int i=0;i<size_str(w);i++){
        str[i]=w.str[i];
    }
    return *this;
}
bool My_string::operator >(const My_string& w)
{
    bool greater_=true;
    for(int i=0;i<size_str(str);i++){
        if(str[i]<w.str[i]){
            greater_=false;
        }
    }
    return greater_;

}
bool My_string::operator <(const My_string &w)
{
    bool lower_=true;
    for(int i=0;i<size_str(str);i++){
        if(str[i]>w.str[i]){
            lower_=false;
        }
    }
    return lower_;

}







