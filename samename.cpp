#include<iostream>
using namespace std;
void sum(int* ,int);
int main(int argc,char*argv[]){
	int c,b[argc-1];
	for(int i=1;i<argc;i++){
		c=atoi(argv[i]);
		b[i]=c;
	}
	for(int i=1;i<argc;i++){
		cout<<b[i]<<endl;
	}
	sum(&b[1],argc-1);
	return 0;
}
void sum(int*a,int b){
	int s=0,p;
	for(int i=0;i<b;i++){
		s+=(*a);
		a++;
	}
	cout<<"Sum of the given numbers = "<<s;
}