#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main(){
    // struct node *head = NULL;
    struct node *head = malloc(sizeof(struct node));

    head->data=40;
    head->link = NULL;
    printf("%d\t",head->data);

    struct node *curr = malloc(sizeof(struct node));
    curr->data = 50;
    curr->link = NULL;
    head->link = curr;

    curr = malloc(sizeof(struct node));
    curr->data = 60;
    curr->link = NULL;
    
    head ->link->link = curr;
}