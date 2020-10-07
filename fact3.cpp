#include<iostream>
#include "fact.h"
using namespace std;
int main(){
	int *k,p;
	cout<<"Enter the number ";
	cin>>p;
	
	k=factorial(p);
	cout<<*k;
	return 0;
}