#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
struct A
{
    int x;
    string str;
    friend ostream & operator << (ostream & os, A & a)
    {
        return os<<a.x<<a.str;
    }
    friend istream & operator >> (istream & is, A & a)
    {
        return is>>a.x>>a.str;
    }
};
void save_array(vector <A> &v)
{
    ofstream f;
    f.open("f4.bin",ios::binary);
    int tmp;
    for(int i=0;i<v.size();i++){
        f.write((char *)&v[i].x, sizeof(int));
        tmp=v[i].str.size();
        f.write((char *)&tmp, sizeof(int));
        f.write( v[i].str.c_str(), v[i].str.size());
    }
    f.close();
}
void load_array(vector <A> &v)
{
    ifstream fin;
    A s;
    fin.open("f4.bin",ios::binary);
    int tmp, tmp_str;
    while(fin.read((char*)&s.x,sizeof(int))){
        fin.read((char *)&tmp,sizeof(tmp));
        char * t= new char [tmp];
        fin.read(t,tmp);
        s.str=t;
        v.push_back(s);
	delete t[];
    }
    fin.close();
}
int main()
{
    A a;
    vector<A> va; int y; int i=0;
    load_array(va);
    cin>>y;
    while(i<y){
        cin>>a;
        va.push_back(a);
        i++;
    }
    save_array(va);
    int x=0;
    for(int i=0;i<va.size();i++){
        cout<<va[i]<<endl;
    }
}
