#include<iostream>
#include "fact.h"
using namespace std;
int main(){
	int *k,p,r[10],t;
	t=0;
	cout<<"Enter the number ";
	cin>>p;
	factorial(p,r,t);
	cout<<t<<endl;
	cout<<sizeof(r)/sizeof(r[0])<<endl;
	for(int i=0;i<sizeof(r)/sizeof(r[0]);i++){
		cout<<r[i];
	}
	return 0;
}