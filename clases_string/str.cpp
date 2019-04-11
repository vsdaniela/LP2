#include <iostream>
using namespace std;
//Rafael Corzo
//Daniela Vilchez
class MiString{
    private:
        char* palabra;
        int tam;

    public:
        MiString(const char* w=NULL);
        MiString(const MiString & w){
            int i=0;
            tam=0;
            while(w.palabra[i]){
                i++;
                tam++;
            }
            palabra= new char[tam+1];
            for(int i=0;i<tam;i++){
                palabra[i]=w.palabra[i];
            }
        }
        ~MiString();
        int tamanho(){return tam;}
        bool operator == (MiString &w){
            bool igual=false;
            if(tamanho()!=tam){
                return igual;
            }
            else{
                for(int i=0;i<tamanho();i++){
                    if(palabra[i]!=w.palabra[i]){
                        return igual;
                    }
                }
            }
            igual=true;
            return igual;
        }
        MiString operator + (const MiString &w){
            int tam_nuevo=tamanho()+tam;
            MiString palabra_nueva=new char[tam_nuevo];
            for(int j=0;j<tamanho();j++){
                palabra_nueva[j]=palabra[j];
            }
            for(int i=tamanho()+1;i<tam_nuevo;i++){
                    for(int x=0;x<tam;x++){
                        palabra_nueva[i]=w.palabra[x];
                    }
            }
            return palabra_nueva;

        }
        char & operator [](const int&i){
            return palabra[i];

        }
        MiString & operator =(const MiString &w){
            for(int i=0;i<tamanho();i++){
                palabra[i]=w.palabra[i];
            }
            return *this;
        }

};
int main(){
    return 0;

}
//~mi_string();
//mi_string & operator = (const mi_String & str)
//mi_string & operator +(const my_String &str)
//bool operator ==,<,<

