#ifndef FILALIGADA_H_INCLUDED
#define FILALIGADA_H_INCLUDED

template <typename Tipo>
struct Node{
    Tipo info;
    Node<Tipo> *prox;
};

template <typename Tipo>
struct Fila{

    private:
        Node<Tipo> *inic;
        Node<Tipo> *fim;

    public:
        Fila(){
            inic=NULL;
            fim=NULL;
        }

        bool Insere(Tipo x){
            bool v=false;
            Node<Tipo> *aux=new Node;//1

            if(aux !=NULL){
                aux->info=x; //2
                aux->prox=NULL; //3

                if(inic==NULL){
                    inic=aux;//4

                else{
                    fim->prox=aux;//5

                }
                fim=aux;//6
                }
                return v;
            }
        Tipo remover(){
            Tipo temp = inic->info;
            Node<Tipo> *aux=inic;
            inic=inic->prox;

            delete aux;
            return temp;
        }
        Tipo primeiro(){
            return inic->info;
        }
        Node<Tipo> *getInic() {
            return inic;

        }
        Node<Tipo> *getFim(){
            return fim;
        }

        }


};



#endif // FILALIGADA_H_INCLUDED
