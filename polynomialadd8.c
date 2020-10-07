#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
int main(){
	int n,x;
	struct node* start;
	struct node* first=(struct node*)malloc(sizeof(struct node));
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the number of nodes in a linked list\n");
	scanf("%d",&n);
	printf("Enter the first node\n");
	scanf("%d",&x);
	first->data=x;
	first->next=NULL;
	start=first;
	for(int i=2;i<=n;i++){
		scanf("%d\n",&x);
		newnode->data=x;
		newnode->next=NULL;
		start->next=newnode;
	}
	while(start!=NULL){
		printf("%d",start->data);
		start=start->next;
	}
	return 0;
}