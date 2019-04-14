#include <iostream>
using namespace std;
//Rafael Corzo
//Daniela Vilchez
class MiString{
    private:
        char* palabra;
        int tam;

    public:

        int tam_te(const char* x){
            int i=0;
            int t=0;
            while(x[i++]!='\0'){
                t++;
            }
            t++;
            return t;
        }
        MiString(const char* w=NULL){
            int x=tam_te(w);
            palabra=new char[x];
            for(int i=0;i<x;i++){
                palabra[i]=w[i];
            }
        }
        MiString(const MiString & w){
            int i=0;
            int tam=0;
            while(w.palabra[i]){
                i++;
                tam++;
            }
            palabra= new char[tam+1];
            for(int i=0;i<tam;i++){
                palabra[i]=w.palabra[i];
            }
        }
        int tamhno(MiString x){
            int i=0;
            int t=0;
            while(x.palabra[i]){t++;i++;}
            return t;
        }
        ~MiString(){delete [] palabra;};

        bool operator == (MiString &w){
            bool igual=true;
            if(tamhno(palabra)!=tamhno(w)){
               return false;
            }
            else{
                 for(int i=0;i<tamhno(palabra);i++){
                    if(palabra[i]!=w.palabra[i]){
                        igual=false;
                    }
                }
            }
            return igual;
        }
        MiString operator + (const MiString &w){
            int tam_nuevo=tamhno(palabra)+tamhno(w);
            MiString palabra_nueva=new char[tam_nuevo];
            for(int j=0;j<tamhno(palabra);j++){
                palabra_nueva[j]=palabra[j];
            }
            int i=tamhno(palabra);
            int x=0;
            while(x<tam_nuevo){
                    palabra_nueva[i]=w.palabra[x];
                    x++;
                    i++;
            }
            return palabra_nueva;

        }
        char & operator [](const int&i){
            return palabra[i];

        }
        MiString & operator =(const MiString &w){
            for(int i=0;i<tamhno(w);i++){
                palabra[i]=w.palabra[i];
            }
            return *this;
        }
        friend ostream& operator<<(ostream& os,  MiString& w){
            return os<<w.palabra;
        }
        friend istream& operator>>(istream& is,  MiString& w){
            return is>>w.palabra;
        }
        bool  operator >(const MiString &w){
            bool m=true;
            for(int i=0;i<tamhno(palabra);i++){
                if(palabra[i]<w.palabra[i]){
                    m=false;
                }
            }
            return m;
        }
        bool  operator <(const MiString &w){
            bool men=true;
            for(int i=0;i<tamhno(palabra);i++){
                if(palabra[i]>w.palabra[i]){
                    men=false;
                }
            }
            return men;
        }
};
int main(){
    MiString a("h");
    MiString b("b");
    MiString x=a+b;
    if(a==b){
        cout<<"igual"<<endl;
    }
    else{
        cout<<"diferente"<<endl;
    }
    if(a<b){
        cout<<"menor";
    }
    else{
        cout<<"mayor";
    }
    /*if(a>b){
        cout<<"mayor";
    }
    else{
        cout<<"menor";
    }*/
    return 0;
}

