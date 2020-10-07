#include<iostream>
using namespace std;
void multiply(int a[3][3],int b[3][3],int c[3][3]);
int main(){
	int a[3][3],b[3][3],c[3][3]={0},i,j,k,p=0;
	cout<<"Enter elements of the matrix";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	cout<<"Enter elements of the second matrix";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>b[i][j];
		}
	}
	multiply(a,b,c);
	cout<<"Multiplication of two matrix is given by "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
void multiply(int a[3][3],int b[3][3],int c[3][3])
	{
	static int i=0,j=0,k=0;
		if(i<3){
			if(j<3){
				if(k<3){
					c[i][j]+=a[i][k]*b[k][j];
					k++;
					multiply(a,b,c);
				}
				k=0;
				j++;
				multiply(a,b,c);
			}
			j=0;
			i++;
			multiply(a,b,c);
		}
	
	
}


