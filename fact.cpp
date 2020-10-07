#include<iostream>
#include "fact.h"
using namespace std;
int main(){
	int *k,p;
	cout<<"Enter the number ";
	cin>>p;
	k=factorial(p);
	for(int i=0;i<sizeof(k);i++){
		cout<<*(k+i);
	}
	return 0;
}