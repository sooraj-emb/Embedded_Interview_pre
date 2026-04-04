#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *pre;
    
}*first=NULL, *last=NULL;

void create_ll(int A[], int l){
    struct node *t;
    first = (struct node*)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    first->pre=NULL;
    last=first;
    for(int i=1;i<l;i++){
            t = (struct node*)malloc(sizeof(struct node));
            t->data=A[i];
            t->next=NULL;
            t->pre = last;
            last->next=t;
            last=t;
    }
  //  last->next=first;
}
void print_back(struct node *p){
    while (p != NULL)
    {
        printf("%d->", p->data);
        p=p->pre;
    }
    //    printf("NULL\n");
    
}
void print_front(struct node *p){
    while (p != NULL)
    {
        printf("%d->", p->data);
        p=p->next;
    }
     //   printf("NULL\n");
    
}
int check_circular(struct node *p){
       struct node *temp = p->next;

    while (temp != NULL && temp != first){
        temp = temp->next;
    }
    
    if (temp == first)
        return 1;  // circular
    else
        return 0;  // not circular
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    create_ll(arr, len);
   // print_back(last);
    //print_front(first);
    if(check_circular(first))
        printf("circular");
    else
        printf("not a circular");
    return 0;
}
