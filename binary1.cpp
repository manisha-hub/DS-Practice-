#include<iostream>
using namespace std;
void sort_array(int b[],int s);
int binary_search(int c[],int s,int t);
int main(){
	int size,p,find=0;
	cout<<"Enter the size of the array "<<endl;
	cin>>size;
	int a[size];
	cout<<"Enter elements of the array "<<endl;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"Enter the element you want to search "<<" ";
	cin>>p;
	sort_array(a,size);
	find=binary_search(a,size,p);
	if(find==0){
		cout<<"Element not found ";
	}
	else{
	cout<<"Found the element at "<<find<<"th position";
}
return 0;
}
void sort_array(int b[],int s){
	int temp;
	for(int i=0;i<s;i++){
		for(int j=i+1;j<s-i;j++){
			if(b[i]>b[j]){
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
}
int binary_search(int c[],int s,int t){
	if(c[s/2]>t){
		for(int i=0;i<s/2;i++){
			if(c[i]==t){
				return i;
			}
		}
	}
	else if(c[s/2]<t){
		for(int i=s/2;i<s;i++){
			if(c[i]==t){
				return i;
				
			}
		}
	}
	else if(c[s/2]==t){
		return s/2;
	}
	return 0;
}