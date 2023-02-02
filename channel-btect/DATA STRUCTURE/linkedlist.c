#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void main(){
    struct node *newnode, *head;  //structure variable
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=4;
    newnode->next=NULL;
    head=newnode;
    printf("%d",head);
}
void create(){
    
}