#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED
using namespace std;
template<typename Tipo>

struct Node{
    Tipo info;
    Node<Tipo> *pEsq;
    Node<Tipo> *pDir;
};

template<typename Tipo>
struct Bst{
    Node<Tipo> *pRaiz;
    Bst(){
        pRaiz=NULL;

    }
    void insere(Node<Tipo> *&t,Tipo x){
        if(t==NULL){
            t=new Node<Tipo>;
            t->info=x;
            t->pEsq=NULL;
            t->pDir=NULL;
        }
        else{
            if(x<t->info){
                insere(t->pEsq,x);
            }
            else{
                insere(t->pDir,x);
            }
        }
    }
    bool arvoreVazia(){
        return pRaiz==NULL;
    }
    void preOrdem(Node<Tipo> *t){
        if(t != NULL) {
            cout<<t->info<<" ";
            preOrdem(t->pEsq);
            preOrdem(t->pDir);
        }

    }
    void posOrdem(Node<Tipo> *t){
        if(t != NULL) {
            posOrdem(t->pEsq);
            posOrdem(t->pDir);
            cout<<t->info<<" ";
        }
    }
    void emOrdem(Node<Tipo> *t){
        if(t != NULL) {
            emOrdem(t->pEsq);
            cout<<t->info<<" ";
            emOrdem(t->pDir);
            }
    }

void remover(Node<Tipo> *&t,Tipo y){
    if(*pRaiz == NULL){   // esta verificacao serve para caso o numero nao exista na arvore.
       cout << "Numero nao existe na arvore!" << endl;
    }
    if(y< (*pRaiz)->info){
       remover(&(*pRaiz)->pEsq, Tipo y);
    }
    else
       if(Tipo x > (*pRaiz)->Tipo x)
          remover(&(*pRaiz)->direita, Tipo x);
       else{    // se nao eh menor nem maior, logo, eh o numero que estou procurando! :)
          *pAux = *pRaiz;     // quem programar no Embarcadero vai ter que declarar o pAux no inicio do void! :[
          if (((*pRaiz)->esquerda == NULL) && ((*pRaiz)->direita == NULL)){         // se nao houver filhos...
                free(pAux);
                (*pRaiz) = NULL;
               }
          else{     // so tem o filho da direita
             if ((*pRaiz)->esquerda == NULL){
                (*pRaiz) = (*pRaiz)->direita;
                pAux->direita = NULL;
                free(pAux); pAux = NULL;
                }
             else{            //so tem filho da esquerda
                if ((*pRaiz)->direita == NULL){
                    (*pRaiz) = (*pRaiz)->esquerda;
                    pAux->esquerda = NULL;
                    free(pAux); pAux = NULL;
                    }
                else{       //Escolhi fazer o maior filho direito da subarvore esquerda.
                   pAux = MaiorDireita(&(*pRaiz)->esquerda); //se vc quiser usar o Menor da esquerda, so o que mudaria seria isso:
                   pAux->esquerda = (*pRaiz)->esquerda;          //        pAux = MenorEsquerda(&(*pRaiz)->direita);
                   pAux->direita = (*pRaiz)->direita;
                   (*pRaiz)->esquerda = (*pRaiz)->direita = NULL;
                   free((*pRaiz));  *pRaiz = pAux;  pAux = NULL;
                   }
                }
             }
          }
}

};




#endif // ARVORE_H_INCLUDED
