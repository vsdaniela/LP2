template <class T>
My_vector<T>::My_vector()
{
    m_size=30;
    c_vector=new T [m_size];
    size_v=0;
}
template <class T>
My_vector<T>::My_vector(size_t s)
{
    size_v=s;
    c_vector= new T [size_v];
}
template <class T>
My_vector<T>::My_vector(const My_vector<T>& v)
{
    size_v= v.size_v;
    c_vector= new T [size_v++];
    for(int i=0;i<v.size_v;i++){
        c_vector[i]=v.c_vector[i];
    }
}
template <class T>
My_vector<T>::~My_vector()
{
    delete [] c_vector;
}
template <class T>
T& My_vector<T>::operator [](const size_t i)
{
    return c_vector[i];
}
template <class T>
size_t My_vector<T>::get_size() const
{
    return size_v;
}
template <class T>
void My_vector<T>::p_size()
{
    m_size=size_v*2;
    T* temp= new T[m_size ];
    for(int i=0;i<size_v;i++){
        temp[i]=c_vector[i];
    }
    delete [] c_vector;
    c_vector=temp;
}
template <class T>
void My_vector<T>::Push_back(const T& x)
{
    if(size_v++>m_size){
       p_size();
    }
    else{
        c_vector[size_v]=x;
        size_v++;
    }
}
template <class T>
void My_vector<T>::Insert(size_t i, const T& x)
{
    c_vector[i]=x;
}
template <class T>
void My_vector<T>::Erase(size_t i, size_t j)
{
    size_t s=size_v-(j-i)+1;
    My_vector<T> x(s);
    int a=0;
    int b=i+1;
    while(a<s){
        if(a==b){
            a=j;
        }
        x[a]=c_vector[a];
        a++;
    }
    delete [] c_vector;
    c_vector=x;
}
template <class T>
My_vector<T> & My_vector<T>::operator = (const My_vector <T>& v)
{
    size_v=v.size_v;
    for(int i=0;i<v.size_v;i++){
        c_vector[i]=v.c_vector[i];
    }
    return *this;



}

