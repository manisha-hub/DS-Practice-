#include<iostream>
#define SIZE 10000
using namespace std;

int main(){
	int a[SIZE],num,x,c=0,fact;
	a[0]=1;
	cout<<"Enter the number "<<endl;
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
	cout<<"Factorial of the given number is "<<" ";
	for(int i=c;i>=0;i--){
		cout<<a[i];
	}
	return 0;
}