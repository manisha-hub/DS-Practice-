#include<iostream>
using namespace std;
int main(){

	int fact=0,temp=0,a[10],c,d,num;
 	a[0]=1,c=0;
 	cout<<"Enter the number ";
 	cin>>num;
 	for(;num>=2;num--){
		fact=0;
		for(int i=0;i<=c;i++){
			fact+=a[i]*num;
			a[i]=fact%10;
			fact/=10;
		}
		while(fact>0){
			a[++c]=fact%10;
			fact/=10;
		}
	}
	for(int i=0;i<=c/2;i++){
		temp=a[i];
		a[i]=a[c-i];
		a[c-i]=temp;
	}
	d=sizeof(a)/sizeof(a[0]);
	cout<<c;
	return 0;
}