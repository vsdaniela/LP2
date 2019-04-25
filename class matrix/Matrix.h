#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
using namespace std;
template <class T>
class Matrix
{
    private:
        T** ptr;
        size_t n_row, n_colums;
    public:
        Matrix(size_t r=0,size_t c=0);
        Matrix(T** m);
        Matrix(const Matrix <T>& m);
        ~Matrix();
        size_t get_row(const Matrix<T>) const;
        size_t get_col(const Matrix<T>) const;
        T & operator () (size_t i, size_t j);
        Matrix <T> operator + (const Matrix <T>& m);
        Matrix <T> operator * (const Matrix <T>& m);
        Matrix <T> & operator << (T & m);
        friend ostream & operator << (T & m);
};
template <class T>
size_t Matrix<T>::get_row(const Matrix<T>) const
{
    return n_row;
}
template <class T>
size_t Matrix<T>::get_col(const Matrix<T>) const
{
    return n_colums;
}

template <class T>
Matrix <T>::Matrix(size_t r,size_t c)
{
    n_row=r;
    n_colums=c;
    ptr= new T* [n_row];
    for(int i=0;i<n_row;i++){
        ptr[i]= new T [n_colums];
    }
}
template <class T>
Matrix <T>::Matrix(T** m)
{
    for(int i=0;i<n_row;i++){
        for(int j=0;j<n_colums;j++){
            ptr[i][j]=m.ptr[i][j];
        }
    }
}
template <class T>
Matrix <T>::Matrix(const Matrix <T> &m)
{
    for(int i=0;i<n_row;i++){
        for(int j=0;j<n_colums;j++){
            ptr[i][j]=m[i][j];
        }
    }
}
template <class T>
Matrix<T>::~Matrix()
{
    for(int i=0;i<n_row;i++){
        delete [] ptr[i];
    }
    delete [] ptr;

}
template <class T>
T & Matrix<T>::operator () (size_t i, size_t j)
{
    return ptr[i][j];
}
template <class T>
Matrix<T> Matrix<T>::operator + (const Matrix <T>& m)
{

    if(get_row(ptr)!=get_row(m) && get_col(ptr)!=get_col(m)){
        cout<<"No se puede sumar estas matrices";
    }
    else{
        Matrix <T> m_new(n_row,n_colums);
        for(int i=0;i<n_row;i++){
            for(int j=0;j<n_colums;j++){
                m_new[i][j]=ptr[i][j]+m.ptr[i][j];
            }
        }
        return **this;
    }
}
template <class T>
Matrix<T> Matrix <T>::operator * (const Matrix <T>& m)
{
    if(get_col(ptr)==get_row(m)){
        Matrix <T> m_p(get_row(ptr),get_col(m));
        for(int i=0;i<get_row(m_p);i++){//
            for(int j=0;j<get_col(m_p);j++){
                    m_p[i][j]=0;
                    for(int k=0;k<get_col(ptr);k++){
                        m_p[i][j]=m_p[i][j]+(ptr[i][k]*m[k][j]);
                    }
            }
        }
        return **this;
    }
    else{
        cout<<"no se pueden multiplicar las matrices";
    }

}
template <class T>
Matrix <T> & operator << (T & m)
{

}
template <class T>
friend ostream & operator << (T & m)
{

}


#endif

