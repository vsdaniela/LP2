#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <cassert>
using namespace std;
template <class T>
class Matrix
{
    private:
        T* ptr;
        size_t n_row, n_colums;
    public:
        Matrix(size_t r=0,size_t c=0);
        //Matrix(T* m, size_t r, size_t c);
        //no sé porqué está mal el constructor que recibe puntero :c
        Matrix(const Matrix <T>& m);
        ~Matrix();
        size_t get_row(const Matrix<T>& m) const;
        size_t get_col(const Matrix<T>& m) const;
        T & operator () (size_t i, size_t j);
        Matrix <T> operator + (const Matrix <T>& m);
        Matrix <T> operator * (const Matrix <T>& m);
        Matrix <T>& operator << (T& m);
        friend ostream & operator << (ostream& os, const Matrix<T>& m)
        {
            for(int i=0;i<m.n_row;i++){
                for(int j=0;j<m.n_colums;j++){
                    os<<m.ptr[j*m.n_row+i]<<" ";
                }
                os<<endl;
            }
            return os;
        }
};
#include "Matrix.inl"

#endif

