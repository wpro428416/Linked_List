#include <stdio.h>
#include <malloc.h>
#include "Singly_Linked_List.h"
#include "bool.h"

void clearList(Node * first){
    if(!isEmpty(first)){
    Node * p;
    while(first->link!=NULL){
        p=first->link;
        first->link=p->link;
        free(p);
    }
    }
}

bool isEmpty(Node * first){
    return (first->link==NULL);
}

int Length(Node * first){
    Node * p=first->link;
    int count=0;
    while(p!=NULL){
        p=p->link;
        count++;
    }
    return count;
}

Node *locate(Node * first,int i){
    if(i<0) { return NULL; }
    Node * p=first;
    int k=0;
    while(p!=NULL&&k<i){
        p=p->link;
        k++;
    }
    return p;
}

bool Insert(Node * first,int i,int data){
    Node * p = locate(first,i-1);
    if(p==NULL){return flase;}
    Node * t = (Node*)malloc(sizeof(Node));
    if(t==NULL){
            printf("error!!");
    }
    t->data=data;
    t->link=p->link;
    p->link=t;
    return true;
}

bool Remove(Node * first,int i){
    Node * p = locate(first,i-1);
    if(p==NULL||p->link==NULL){
        return flase;
    }
    Node * q = p->link;
    p->link=q->link;
    free(q);
    return true;
}

Node *Search(Node * first,int data){
    Node * p = first;
    while(p->link!=NULL&&p->data!=data){
         p=p->link;
    }
    return p;
}

void insertRear(Node * now,int endflag){
    int data;
    scanf("%d",&data);
    if(data==endflag){
        now->link=NULL;
    }
    else{
        Node * rear = (Node*)malloc(sizeof(Node));
        rear->data=data;
        now->link=rear;
        insertRear(now->link,endflag);
    }
}

void printNode(Node * first){
    Node * p=first->link;
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->link;
    }
}
