#include<stdio.h>
#include<stdlib.h>
struct node{
	int data1;
	int data2;
	struct node* next;
};
int main(){
	int n,x1,x2,n1;
	struct node* start1,start2;
	struct node* first=(struct node*)malloc(sizeof(struct node));
	struct node* first1=(struct node*)malloc(sizeof(struct node));
	struct node* add=(struct node*)malloc(sizeof(struct node));
	printf("Enter no. of elements in the first polynomial\n");
	scanf("%d",&n);
	printf("Enter the data of first node\n");
	scanf("%d%d",&x1,&x2);
	first->data1=x1;
	first->data2=x2;
	first->next=NULL;
	start1=first;
	for(int i=2;i<=n;i++){
		scanf("%d%d",&x1,&x2);
		first1->data1=x1;
		first1->data2=x2;
		first1->next=NULL;
		start1->next=first1;
		start1=start1->next;
	}
	while(first!=NULL){
		printf("%d %d",start1->data1,start1->data2);
		start1=start1->next;
	}
	
	return 0;
}