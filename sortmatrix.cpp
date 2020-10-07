#include<iostream>
using namespace std;
int main(){
	int r,c,temp;
	cout<<"Enter no. of rows and columns in the matrix"<<endl;
	cin>>r>>c;
	int a[r][c];
	cout<<"Enter the elements of the matrix"<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			for(int k=j+1;k<c;k++){
				if(a[i][j]>a[i][k]){
					temp=a[i][j];
					a[i][j]=a[i][k];
					a[i][k]=temp;
				}
			}
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			for(int k=j+1;k<c;k++){
				if(a[j][i]<a[k][i]){
					temp=a[j][i];
					a[j][i]=a[k][i];
					a[k][i]=temp;
				}
			}
		}
	}
	cout<<"Matrix after sorting "<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;

}