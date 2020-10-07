#include<iostream>
using namespace std;
void sort_array(int b[],int s,int t);
void binary_search(int c[],int s,int t);
int main(){
	int size,p;
	cout<<"Enter the size of the array "<<endl;
	cin>>size;
	int a[size];
	cout<<"Enter elements of the array "<<endl;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"Enter the element you want to search "<<" ";
	cin>>p;
	sort_array(a,size,p);
}
void sort_array(int b[],int s,int t){
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
	binary_search(b,s,t);
}
void binary_search(int c[],int s,int t){
	while(c[s-1]!=t){
		if(c[s/2]<t){
			s/=2;
			continue;
		}
		if(c[s/2]>t){
			s/=2;
			continue;
			
		}
		if(c[s/2]==t){
			cout<<"Found "<<t<<" at "<<c[s/2];
		}
	}
}