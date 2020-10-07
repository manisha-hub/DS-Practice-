#include<iostream>
#include "fact.h"
using namespace std;
int main(){
	int *k,p,r[10],t;
	cout<<"Enter the number ";
	cin>>p;
	factorial(p,r,t);
	cout<<t;
	for(int i=0;i<=t;i++){
		cout<<r[i];
	}
	return 0;
}