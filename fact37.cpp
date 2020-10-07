#include<iostream>
#include "fact.h"
using namespace std;
int main(){
	int *k,p,r[10],t=0;
	cout<<"Enter the number ";
	cin>>p;
	factorial(p,r,t);
	for(int i=0;i<=t+2;i++){
		cout<<r[i];
	}
	return 0;
}