#include <iostream>
#include "FILA.h"
using namespace std;

int main()
{
    cout << "Fila em alocação sequencial" << endl;
    char opc,x;
    Fila<int> f(10);
    do{
        cout<<"1-insere"<<endl;
        cout<<"2-remove"<<endl;
        cout<<"3-primeiro"<<endl;
        cout<<"4-exibe a fila"<<endl;
        cout<<"9-fim"<<endl;
        cout<<"SELECIONE"<<endl;

        switch(opc){
            case'1':
                if(f.filaCheia()){
                    cout<<"Fila cheia..."<<endl;
                }
                else{
                    cout<<"Digite o valor:";
                    cin>>x;
                    f.insere(x);
                }
                break;
            case'2':
                if(f.filaVazia()){
                    cout<<"Fila vazia..."<<endl;
                }
                else{
                    cout<<"Removido:"<<f.remover()<<endl;
                }
                break;
            case'3':
                if(f.filaVazia()){
                    cout<<"Fila Vazia..."<<endl;
                }else{
                    cout<<"primeiro:"<<f.Primeiro()<<endl;
                }
                break;
            case'4':
                if(f.filaVazia()){
                    cout<<"Fila Vazia..."<<endl;
                }
                else{

                }
                break;
            case'9':
                cout<<fim<<endl;

        }
    }
    return 0;
}
