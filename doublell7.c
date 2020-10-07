#include<stdlib.h>
#include<stdio.h>
void insertion(int);
void display(struct node*);
struct node{
	int data;
	struct node* next;
	struct node* prev;
};
int main(){
	int n;
	printf("Enter no. of elements in the linklist\n");
	scanf("%d",&n);
	insertion(n);
}
/*Function to insert nodes */
void insertion(int n){
	struct node* head=NULL;
	struct node* temp= NULL;
	struct node* p=NULL;
	for(int i=0;i<n;i++){
		temp=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the coefficient & power for node no. %d",i+1);
		scanf("%d",&(temp->data));
		temp->next=NULL;
		temp->prev=NULL;
		if(head==NULL){
			head=temp;
		}
		else{
			p=head;
			while(p->next != NULL){
				p=p->next;
			}
			p->next=temp;
			temp->prev=p;
			temp->next=NULL;
		}
	}
	printf("Forward traversal of linked list\n");
	struct node* temp1;
		while(head!=NULL){
			printf("%d->",head->data);
			temp1=head;
			head=head->next;
		}
		printf("Backward traversal of linked list is given by\n");
		while(head!=NULL){
			printf("%d->",head->data);
			head=head->prev;
		}
	display(head);
	}
	/*Function to traverse the  linked list*/
	void display(struct node* head){
		struct node* temp=NULL;
		temp=head;
		printf("Forward traversal of linked list\n");
		while(temp!=NULL){
			printf("%d->",temp->data);
			temp=temp->next;
		}
		printf("Backward traversal of linked list is given by\n");
		while(temp!=NULL){
			printf("%d->",temp->data);
			temp=temp->prev;
		}
	}
  