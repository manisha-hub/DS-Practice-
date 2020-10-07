#include<iostream>
using namespace std;
int main(){
	int size,choice,i,b,pos,temp,j;
	cout<<"Enter size of the array"<<endl;
	cin>>size;
	int a[size+1];
	cout<<"Enter the elements of the array"<<endl;
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"1.Traversal "<<endl;
	cout<<"2.Insertion "<<endl;
	cout<<"3.Deletion by element "<<endl;
	cout<<"4.Deletion by position of element"<<endl;
	cout<<"5.Sorting "<<endl;
	cout<<"6.Searching "<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"The result of the traversal of the given array is "<<endl;
			for(int i=0;i<size;i++){
			cout<<a[i]<<" ";
			}
			cout<<endl;
		case 2:
			int b,pos;
			cout<<"Enter the the element you want to insert and also specify the position where you want to insert "<<endl;
			cin>>b>>pos;
			for(int i=size;i>=pos;i--){
				a[i]=a[i-1];
			}
			a[pos-1]=b;
			cout<<"Array after insertion of the element is "<<endl;
			for(int i=0;i<=size;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		case 3:
			cout<<"Enter the element you want to delete ";
			cin>>b;
			for(int i=0;i<size+1;i++){
				if(a[i]==b){
					for(int k=i;k<size;k++){
					a[k]=a[k+1];
				}
			}

			}
			cout<<"Array after deletion of the given element is "<<endl;
			for(int i=0;i<size;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		case 4:
			cout<<"Enter the position "<<endl;
			cin>>pos;
			for(int i=0;i<size;i++){
				if(i==pos-1){
					for(int k=i;k<size-1;k++){
						a[k]=a[k+1];
					}
				}
			}
			cout<<"The array after deletion of the element at a given position is "<<endl;
			for(int i=0;i<size-1;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		case 5:
			cout<<"Sorted Array is "<<endl;
			for(i=0;i<size-1;i++){
				for(j=i+1;j<size;j++){
					if(a[i]>a[j]){
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
					else
					continue;
				}
			}
			for(i=0;i<size;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		case 6:
			cout<<"Enter the element you want to search "<<endl;
			cin>>b;
			for(i=0;i<size;i++){
				if(a[i]==b){
					cout<<"Found the element at position "<<i<<endl;
				}
			}
	}
	return 0;

}
