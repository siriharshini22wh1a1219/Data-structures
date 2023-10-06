#include<stdio.h>
#include<stdlib.h>
struct list{
        int data;
        struct list*p;
};
void traverse(struct list*p);
int main(){
        struct list*head=(struct list*)malloc(sizeof(struct list));
        head->data=10;
        head->p=NULL;
        struct list*current=(struct list*)malloc(sizeof(struct list));
        current->data=20;
        current->p=NULL;
        head->p=current;
        current=(struct list*)malloc(sizeof(struct list));
        current->data=30;
        current->p=NULL;
        head->p->p=current;
        printf("%d->%d->%d",head->data,head->p->data,head->p->p->data);
	traverse(p);
}
void traverse(struct list*p){
	struct list*temp=(struct list*)malloc(sizeof(struct list));
	temp->p=list;
        if(temp->p==NULL){
	printf("the head is empty");
        }
        else if(temp->p!=NULL){
	printf("%d",temp->data);
        temp=temp->p;
        }	
