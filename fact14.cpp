#include<iostream>
#include "fact.h"
using namespace std;
int main(){
	int *k,p,r[10];
	cout<<"Enter the number ";
	cin>>p;
	factorial(p,r);
	for(int i=0;i<10;i++){
		cout<<r[i];
	}
	return 0;
}