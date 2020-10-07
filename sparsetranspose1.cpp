#include<iostream>
using namespace std;
int main()
{
	int size,temp;
	cout<<"Enter the size of the matrices "<<endl;
	cin>>size;
	int r[size],c[size],v[size];
	cout<<"Enter the row elements of the matrices "<<endl;
	for(int i=0;i<size;i++){
		cin>>r[i];
	} 
	cout<<"Enter the column elements of the matrices "<<endl;

	for(int i=0;i<size;i++){
		cin>>c[i];
	} 
	cout<<"Enter the value elements of the matrices "<<endl;
	for(int i=0;i<size;i++){
		cin>>v[i];
	} 
	for(int i=0;i<size;i++){
		temp=r[i];
		r[i]=c[i];
		c[i]=temp;
	}
	cout<<"Transpose of the given matrices are "<<endl;
	for(int i=0;i<size;i++){
		cout<<r[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<size;i++){
		cout<<c[i]<<" ";
	}
	return 0;

}