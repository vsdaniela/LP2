#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include <iostream>
template <class T>
class My_vector
{
    private:
        T* c_vector;
        size_t m_size;
        size_t size_v;
        void p_size();
    public:
        My_vector();
        My_vector(size_t s=0);
        My_vector(const My_vector<T>& v);
        ~My_vector();
        T& operator [](const size_t i);
        size_t get_size()const;
        void Push_back(const T& x);
        void Insert(size_t i, const T& x);
        My_vector<T> Erase(size_t i, size_t j);
        My_vector<T> & operator = (const My_vector <T>& v);
        //friend ostream& operator <<(ostream& os, My_vector<T>& v);
};
#include "My_vector.inl"
#endif // MY_VECTOR_H




