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
size_t Matrix<T>::row_p(const T**m)
{
    int i=0; int j=0;
    int r=0;
    while(m[i][j]){
        r++;
        i++;
    }
    r++;
    return r;
}
template <class T>
size_t Matrix<T>::col_p(const T**m)
{
    int i=0; int j=0;
    int c=0;
    while(m[i][j]){
        c++;
        j++;
    }
    c++;
    return c;
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
    for(int i=0;i<row_p(m);i++){
        for(int j=0;j<col_p(m);j++){
            ptr[i][j]=m.ptr[i][j];
        }
    }
}
template <class T>
Matrix <T>::Matrix(const Matrix <T> &m)
{
    *this = m;

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

    if(n_row==m.n_row && n_colums==m.n_colums){
        Matrix <T> m_new(n_row,n_colums);
        for(int i=0;i<n_row;i++){
            for(int j=0;j<n_colums;j++){
                m_new.ptr[i][j]=ptr[i][j]+m.ptr[i][j];
            }
        }
        return m_new;
    }
    else{
        cout<<"i cant";
    }
}
template <class T>
Matrix<T> Matrix <T>::operator * (const Matrix <T>& m)
{
    if(n_colums==m.n_row){
        Matrix <T> m_p(n_row,m.n_colums);
        for(int i=0;i<m_p.n_row;i++){//
            for(int j=0;j<m_p.n_colums;j++){
                    m_p.ptr[i][j]=0;
                    for(int k=0;k<n_colums;k++){
                        m_p.ptr[i][j]=m_p.ptr[i][j]+(ptr[i][k]*m.ptr[k][j]);
                    }
            }
        }
        return m_p;
    }
    else{};
}
template <class T>
Matrix<T>& Matrix <T>::operator << (T& m)
{

}



