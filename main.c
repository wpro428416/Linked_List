#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <conio.h>
#include "Singly_Linked_List.h"
int main(){
    printf("This is a Singlly_Linked_List.\n");
    printf("Press the key '5' to creat a List\n");
    if(getch()=='5'){
        Node * first = (Node*)malloc(sizeof(Node));
        system("cls");
        printf("Please enter the Integer to creat the Node until you press '-1'\n");
        insertRear(first,-1);
        system("cls");
        printf("Now choose what you like\n");
        printf("press '0' to clear the List.\n");
        printf("press '1' to judge the Length.\n");
        printf("press '2' to print all of the datas in turn.\n");
        printf("press '3' to test in inerior");
        printf("\n\n");
        switch(getch()){
            case '0':clearList(first);break;
            case '1':printf("%d",Length(first));break;
            case '2':printNode(first);break;
            case '3':printf("Insert(first,2,12)  %d\n",Insert(first,2,12));
                   printf("Remove(first,3)  %d\n",Remove(first,3));
            default:break;
        }
    }
    return 0;
}
