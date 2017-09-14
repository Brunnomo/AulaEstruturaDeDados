#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include <math.h>
#include <string.h>
using namespace std;

struct Triangulo{

     int a,b,c;

     bool isTriangulo() {
     return a<b+c && b<a+c && c<a+b;
     }
     int pegaPerimetro(){

     return a+b+c;
     }
    double pegaArea() {
    double sp=(a+b+c)/2;
    return sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    }
    string pegaTipo() {
     string t;
     if(a==b && b==c){
        t="Equilatero";
        }
        else{
            if(a==b || b==c ||a==c){
                t="Isoceles";
            }
            else{
                t="Escaleno";
            }
        }
        return t;
    }



};

#endif // LISTA_H_INCLUDED
