#include<stdio.h>
#include<stdlib.h>
void insertion(int, struct node*);
void display(struct node*);
void add(struct node*,struct node*);
struct node{
	int data1;
	int data2;
	struct node* next;
};
int main(){
	int n1=0,n2=0;
	struct node* head1=NULL;
	struct node* head2=NULL;
	struct node* head3=NULL;
	printf("Enter no. of terms in polynomial 1\n");
	scanf("%d",&n1);
	insertion(n1,head1);
	printf("\nEnter no. of terms in polynomial 2\n");
	scanf("%d",&n2);
	insertion(n2,head2);
	add(head1,head2);
	return 0;
}
void insertion(int n,struct node* head){
	struct node* temp= NULL;
	struct node* p=NULL;
	for(int i=0;i<n;i++){
		temp=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the coefficient & power for node no. %d",i+1);
		scanf("%d%d",&(temp->data1),&(temp->data2));
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
		display(head);
	}
void display(struct node* head){
		while(head!=NULL){
			printf("%d,%d->",head->data1,head->data2);
			head=head->next;
		}
	}
  
// Function Adding two polynomial numbers 
void add(struct node *poly1, struct node *poly2) 
{ 
	struct node* poly=NULL;
while(poly1->next && poly2->next) 
    { 
        // If power of 1st polynomial is greater then 2nd, then store 1st as it is 
        // and move its pointer 
        if(poly1->data2 > poly2->data2) 
        { 
            poly->data2 = poly1->data2; 
            poly->data1 = poly1->data1; 
            poly1 = poly1->next; 
        } 
          
        // If power of 2nd polynomial is greater then 1st, then store 2nd as it is 
        // and move its pointer 
        else if(poly1->data2 < poly2->data2) 
        { 
            poly->data2 = poly2->data2; 
            poly->data1 = poly2->data1; 
            poly2 = poly2->next; 
        } 
          
        // If power of both polynomial numbers is same then add their coefficients 
        else
        { 
            poly->data2 = poly1->data2; 
            poly->data1 = poly1->data1+poly2->data1; 
            poly1 = poly1->next; 
            poly2 = poly2->next; 
        } 
          
        // Dynamically create new node 
        poly->next = (struct node *)malloc(sizeof(struct node)); 
        poly = poly->next; 
        poly->next = NULL; 
    } 
while(poly1->next || poly2->next) 
    { 
        if(poly1->next) 
        { 
            poly->data2= poly1->data2; 
            poly->data1 = poly1->data1; 
            poly1 = poly1->next; 
        } 
        if(poly2->next) 
        { 
            poly->data2 = poly2->data2; 
            poly->data1 = poly2->data1; 
            poly2 = poly2->next; 
        } 
        poly->next = (struct node *)malloc(sizeof(struct node)); 
        poly = poly->next; 
        poly->next = NULL; 
    } 
    display(poly);
}