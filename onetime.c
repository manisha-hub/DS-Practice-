#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
	printf("Hello ");
	remove(argv[0]);
	return 0;
}