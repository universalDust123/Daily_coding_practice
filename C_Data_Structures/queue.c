#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    int d;
    struct node *next;
};
typedef struct node node;
void enqueue(node** F,node** R,int v){

    node* n=(node*)malloc(sizeof(node));
    n->next=NULL;
    n->d=v;
    if(*F==NULL && *R==NULL){
        *F=n;
        *R=n;
    }
    else{
        (*R)->next=n;
        *R=n;
    }
}
int dequeue(node** F,node** R){
    if((*F)==(*R)){
        (*R)=NULL;
    }
    node* t=*F;
    *F=(*F)->next;
    int a=t->d;
    free(t);
    return a;
}

int peekQ(node* F){
    return F->d;
}
void printQ(node* F){
    while(F->next!=NULL){
        printf("%d->",F->d);
        F=F->next;
    }
    printf("%d->NULL\n",F->d);
    return;
}