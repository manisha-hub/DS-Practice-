#include<iostream>
#include "fact.h"
using namespace std;
int main(){
	int *k,p;
	cout<<"Enter the number ";
	cin>>p;
	k=factorial(p);
	for(int i=0;i<100;i++){
		cout<<*(k+i);
	}
	cout<<factorial(p);
	return 0;
}