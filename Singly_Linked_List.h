#ifndef SINGLY_LINKED_LIST_H_INCLUDED
#define SINGLY_LINKED_LIST_H_INCLUDED

#include "bool.h"
typedef struct Node{
    int data;
    struct Node * link;
}Node;


void insertRear(Node * rear,int endflag); //以尾插法创建链表
void clearList(Node * first);//清空链表
bool isEmpty(Node * first);
int Length(Node * first);
Node *locate(Node * first,int i);
Node *Search(Node * first,int data);
bool Insert(Node * first,int i,int data);
bool Remove(Node * first,int i);
void printNode(Node * first);

#endif // SINGLY_LINKED_LIST_H_INCLUDED
