#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

struct Triangulo{

    private:
    int ladoa,ladob,ladoc;

    public:
        Triangulo(int x, int y, int z){
            ladoa=x;
            ladob=y;
            ladoc=z;
        }
    float perimetro(){

    return ladoa+ladob+ladoc;
    }

    float area(){

    }
};


#endif // TRIANGULO_H_INCLUDED
