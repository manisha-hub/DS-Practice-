#include<stdio.h>
#include<stdlib.h>
void traversal(struct node*);
void reversal(struct node*);
/*Creation of node structure*/
struct node{
	int data;
	struct node* next;
};
int main(){
	int x;
	struct node* start;
	struct node* temp;
	struct node* first=NULL;
	struct node* second=NULL;
	struct node* third=NULL;
	struct node* fourth=NULL;
	struct node* fifth=NULL;
	/*Memory allocation*/
	first=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	fourth=(struct node*)malloc(sizeof(struct node));
	fifth=(struct node*)malloc(sizeof(struct node));
	start=first;
	temp=first;
	/*Allocation of data and link part*/
	first->data=10;
	first->next=second;
	second->data=20;
	second->next=third;
	third->data=30;
	third->next=fourth;
	fourth->data=40;
	fourth->next=fifth;
	fifth->data=50;
	fifth->next=NULL;
	printf("Linked list before insertion\n");
	traversal(start);
	struct node* ins=(struct node*)malloc(sizeof(struct node));
	ins->data=5;
	ins->next=NULL;
	/*Insertion at first place*/
	start=ins;
	ins->next=first;
	printf("Linked list after insertion at first place\n");
	traversal(start);
	/*Insertion at last place*/
	while(temp->next != NULL){
		temp=temp->next;
	}
	struct node* last=(struct node*)malloc(sizeof(struct node));
	last->data=60;
	last->next=NULL;
	temp->next=last;
	printf("Linked list after insertion at last place\n");
	traversal(first);
	/*Insertion of node in between of a linked list*/
	temp=first;
	struct node* bet=(struct node*)malloc(sizeof(struct node));
	bet->data=35;
	bet->next=NULL;
	while(temp->data!=30){
		temp=temp->next;
	}
	bet->next=(temp->next);
	temp->next=bet;
	printf("Linked list after insertion of a new node in between of two nodes\n");
	traversal(first);
	/*Deletion of a node*/
	temp=first;
	x=2;
	while((x-1)<0){
		temp=temp->next;
		x--;
	}
	temp->next=(temp->next)->next;
	printf("Linked list after deletion of a node is \n");
	traversal(first);
	reversal(first);

	return 0;
}
/*Funtion which traverse the link list*/
void traversal(struct node* s){
	while(s!=NULL){
		printf("%d\n",s->data);
		s=s->next;
	}
}
/*Function to reverse the link list by node*/
void reversal(struct node* start){
	struct node* prev;
	struct node* cur;
	struct node* rev;
	rev=start;
	while(rev!=NULL){
		prev=rev;
		rev=rev->next;
		cur=rev;
		cur->next=prev;
	}
	start->next=NULL;
	printf("Linked list after reversal is given by\n");
	

}