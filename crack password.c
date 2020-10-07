#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	
	int flag =0;
	char password[10];
	memset(password,0,sizeof(password));
	strcpy(password,argv[1]);
	if(0==strcmp("Strange",password)){
		flag=1;
	}
	if(flag){
		printf("\n password is craked\n");
	}
	else{
		printf("\nIncorrect password");
	}
	return 0;
}
