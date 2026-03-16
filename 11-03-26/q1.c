#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node* next;
}* head = NULL,* last = NULL;

void create(int m){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->val = m;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
        last = newNode;
    }
    else{
        last->next = newNode;
        last = newNode;
    }
}
void display(){
    struct Node* *p;
    p = head;
    if(p == NULL){
        printf("The linked list is empty.");
        return;
    }
    printf("The linked list is: ");
    while(p != NULL){
        printf("%d ",p->val);
        p = p->next;
    }
}
void main(){
    int n,m,i;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the value of node %d: ",i+1);
        scanf("%d",&m);
        create(m);
}
display();
}

