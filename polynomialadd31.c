#include<stdio.h>
#include<stdlib.h>
void insertion(int, struct node*);
void display(struct node*);
void polyadd(struct node*,struct node*,struct node*);
struct node{
	int coeff;
	int pow;
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
	polyadd(head1,head2,head3);
	return 0;
}
void insertion(int n,struct node* head){
	struct node* temp= NULL;
	struct node* p=NULL;
	for(int i=0;i<n;i++){
		temp=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the coefficient & power for node no. %d",i+1);
		scanf("%d%d",&(temp->coeff),&(temp->pow));
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
			printf("%d,%d->",head->coeff,head->pow);
			head=head->next;
		}
	}
void polyadd(struct node *poly1, struct node *poly2, struct node *poly) 
{ 
while(poly1->next && poly2->next) 
    { 
        // If power of 1st polynomial is greater then 2nd, then store 1st as it is 
        // and move its pointer 
        if(poly1->pow > poly2->pow) 
        { 
            poly->pow = poly1->pow; 
            poly->coeff = poly1->coeff; 
            poly1 = poly1->next; 
        } 
          
        // If power of 2nd polynomial is greater then 1st, then store 2nd as it is 
        // and move its pointer 
        else if(poly1->pow < poly2->pow) 
        { 
            poly->pow = poly2->pow; 
            poly->coeff = poly2->coeff; 
            poly2 = poly2->next; 
        } 
          
        // If power of both polynomial numbers is same then add their coefficients 
        else
        { 
            poly->pow = poly1->pow; 
            poly->coeff = poly1->coeff+poly2->coeff; 
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
            poly->pow = poly1->pow; 
            poly->coeff = poly1->coeff; 
            poly1 = poly1->next; 
        } 
        if(poly2->next) 
        { 
            poly->pow = poly2->pow; 
            poly->coeff = poly2->coeff; 
            poly2 = poly2->next; 
        } 
        poly->next = (struct node *)malloc(sizeof(struct node)); 
        poly = poly->next; 
        poly->next = NULL; 
    } 
    printf("Done\n");
    display(poly);
} 