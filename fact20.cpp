#include<iostream>
#include "fact.h"
using namespace std;
int main(){
	int *k,p,r[10],t;
	cout<<"Enter the number ";
	cin>>p;
	factorial(p,r);
	for(int i=10;i>=0;i--){
		cout<<r[i]<<endl;
	}
	return 0;
}