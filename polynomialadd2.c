#include<stdio.h>
#include<stdlib.h>
struct node{
	int data1;
	int data2;
	struct node* next;
};
int main(){
	int n;
	struct node* start1;
	struct node* first=(struct node*)malloc(sizeof(struct node));
	struct node* second=(struct node*)malloc(sizeof(struct node));
	struct node* add=(struct node*)malloc(sizeof(struct node));
	printf("Enter no. of elements in the first polynomial\n");
	scanf("%d",&n);
	printf("Enter the first node of polynomial 1\n");
	scanf("%d%d",&start1->data1,&start1->data2);
	for(int i=2;i<=n;i++){
		scanf("%d%d",&first->data1,&first->data2);
		first->next=NULL;
		start1->next=first;
		first=start1;
	}
	while(first!=NULL){
		printf("%d%d\n",first->data1,first->data2);
		first=first->next;
	}
	return 0;
}