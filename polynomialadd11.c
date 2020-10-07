#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
int main(){
	int n,x;
	struct node* start=NULL;
	struct node* first=(struct node*)malloc(sizeof(struct node));
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the number of nodes in a linked list\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the data for node no. ",i+1);
		scanf("%d\n",&(first->data));
		first->next=NULL;
		if(start==NULL){
			start=first;
		}
	}
	while(start->next!=NULL){
		printf("%d\n",start->data);
		start=start->next;
	}
	return 0;
}