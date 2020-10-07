#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
int main(){
	int n=0;
	struct node* head=NULL;
	struct node* temp=NULL;
	struct node* p=NULL;
	printf("Enter the no. of nodes you want\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		temp=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the data for node no. %d",i+1);
		scanf("%d",&(temp->data));
		temp->next=NULL;
		if(head==NULL){
			head=temp;
		}
		else{
			p=head;
			while(p->next != NULL){
				p=p->next;
			}
			p->next=temp;
		}
	}
	while(head != NULL){
		printf("\t%d->",head->data);
		head=head->next;
	}
	return 0;
}