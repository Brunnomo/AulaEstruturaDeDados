#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

struct Node{
    int info;
    Node *prox;
};

struct Pilha{
    Node *topo;
    Pilha(){
        topo=NULL;
    }
    bool pilhavazia(){
        return topo==NULL;
    }
    bool empliha(int x){
        bool t=false;
        Node *aux=new Node;
        if(aux!==NULL){
            t=true;
            aux->info=x;
            aux->prox=topo;
            topo=axu;
        }
        return t;
    }

};



#endif // PILHA_H_INCLUDED
