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
	struct node* p1=NULL;
	printf("Enter no. of terms in polynomial 1\n");
	scanf("%d",&n1);
	insertion(n1,head1);
	printf("Enter no. of terms in polynomial 2\n");
	scanf("%d",&n2);
	insertion(n2,head2);
	if(n1>n2){
		add(head1,head2);
	}
	else
		add(head2,head1);

	
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
			printf("%d\t%d->",head->data1,head->data2);
			head=head->next;
		}
	}
void add(struct node* head1,struct node* head2){
		int flag=0;
		struct node* head3=NULL;
		struct node* p=NULL;
		struct node* temp=NULL;
		while(head1!=NULL){
			while(head2!=NULL){
				if(head1->data2==head2->data2){
					temp->data1=head1->data1+head2->data1;
					temp->data2=head1->data2;
					flag=1;
					if(head3==NULL){
						head3=temp;
					}
					else{
						p=head3;
						while(p->next != NULL){
							p=p->next;
						}
						p->next=temp;
					}
				}
				head2=head2->next;
		}
		if(flag==0){
			if(head3==NULL){
					head3=head1;
							}
			else{
					p=head3;
					while(p->next != NULL){
						p=p->next;
					}
						p->next=head1;
				}
					}
			head1=head1->next;
			}
			while(head3 != NULL){
				printf("%d\t%d->",head3->data1,head3->data2);
				head3=head3->next;
			}
	}