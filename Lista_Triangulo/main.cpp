#include <iostream>
#include "ListaLinear.h"
#include "Triangulo.h"

using namespace std;

int main()
{
    cout <<"Lista de Triangulos"<<endl;
    Lista<Triangulo> lista(10);
    Triangulo t;
    cout<<"Digite o Lado A: "<<endl;
    cin>>t.a;
    cout<<"Digite o Lado B: "<<endl;
    cin>>t.b;
    cout<<"Digite o Lado C: "<<endl;
    cin>>t.c;

    if(t.isTriangulo()){
        lista.insere(t);
    }
    else{
        cout<<"Nao eh um triangulo"<<endl;
    }
    //exibindo
   if(lista.listaVazia()){
    cout<<"Lista vazia.."<<endl;
   }
   else{
    for(int i=0;i<=lista.getIndice();i++){
        t=lista.getValor(i);
        cout<<"Lado A: "<<t.a<<endl;
        cout<<"Lado B: "<<t.b<<endl;
        cout<<"Lado C: "<<t.c<<endl;
        cout<<"Perimetro: "<<t.pegaPerimetro()<<endl;
        cout<<"Area: "<<t.pegaArea()<<endl;
        cout<<"Triangulo: "<<t.pegaTipo()<<endl;
    }
        return 0;
   }
}
