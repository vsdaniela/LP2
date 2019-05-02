#include<cassert>
template <class T>
size_t Matrix<T>::get_row(const Matrix<T>& m) const
{
    return n_row;
}
template <class T>
size_t Matrix<T>::get_col(const Matrix<T>& m) const
{
    return n_colums;
}
template <class T>
Matrix <T>::Matrix(size_t r,size_t c)
{
    n_row=r;
    n_colums=c;
    ptr= new T [n_row*n_colums];
}
/*template <class T>
Matrix<T>::Matrix(T* m,size_t r, size_t c)
{
    ptr= new T[r*c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            ptr[j*n_row+i]=m[j*r+i];
        }
    }
}*/
template <class T>
Matrix <T>::Matrix(const Matrix <T>& m)
{
    n_row=m.n_row;
    n_colums=m.n_colums;
    ptr= new T[n_row*n_colums];
    for(int i=0;i<n_row;i++){
        for(int j=0;j<n_colums;j++){
            ptr[j*n_row+i]=m.ptr[j*m.n_row+i];
        }
    }
}
template <class T>
Matrix<T>::~Matrix()
{
    delete [] ptr;
}
template <class T>
T & Matrix<T>::operator () (size_t i, size_t j)
{
    return ptr[j*n_row+i];
}
template <class T>
Matrix<T> Matrix<T>::operator + (const Matrix <T>& m)
{
    assert(n_row==m.n_row);
    assert(n_colums==m.n_colums);
    Matrix <T> m_new(n_row,n_colums);
    for(int i=0;i<n_row;i++){
        for(int j=0;j<n_colums;j++){
            m_new.ptr[j*n_row+i]=ptr[j*n_row+i]+m.ptr[j*n_row+i];
        }
    }
    return m_new;
}
template <class T>
Matrix<T> Matrix <T>::operator * (const Matrix <T>& m)
{
    assert(n_colums==m.n_row);
    Matrix <T> m_p(n_row,m.n_colums);
    for(int i=0;i<m_p.n_row;i++){
        for(int j=0;j<m_p.n_colums;j++){
            m_p.ptr[j*n_row+i]=0;
            for(int k=0;k<n_colums;k++){
                m_p.ptr[j*n_row+i]=m_p.ptr[j*n_row+i]+ptr[j*n_row+i]*m.ptr[j*n_row+i];
            }
        }
    }
    return m_p;
}
template <class T>
Matrix<T>& Matrix<T>::operator <<(T &m)
{
    size_t i=0; size_t j=0;
    if(i<n_row){
        ptr[j*n_row+i]=m;
        if(j<n_colums){
            j++;
        }
        else{
            i++;
            j=0;
        }
    }
    else{};
    return *this;

}

