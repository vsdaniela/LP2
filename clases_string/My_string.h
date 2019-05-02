#ifndef MY_STRING_H
#define MY_STRING_H
#include <iostream>
using namespace std;

class My_string
{
    private:
        char* str;
        int siz;
    public:
        int size_ch(const char* x);
        My_string(const char* w=NULL);
        My_string(const My_string& w);
        int size_str(My_string x);
        ~My_string();
        bool operator == (My_string& w);
        My_string operator + (const My_string& w);
        char & operator [](const int& i);
        My_string & operator =(const My_string& w);
        bool  operator >(const My_string& w);
        bool  operator <(const My_string& w);
        friend ostream& operator<<(ostream& os,  My_string& w)
        {
            return os<<w.str;
        }
        friend istream& operator>>(istream& is,  My_string& w)
        {
            return is>>w.str;
        }
};
#endif // MY_STRING_H

