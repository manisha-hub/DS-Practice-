#include<iostream>
using namespace std;
int main(){
	int r,c,w=0,h=0;
	cout<<"Enter no. of rows and columns in a matrix"<<endl;
	cin>>r>>c;
	int a[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	while(w<c && h<r){
		for(int i=w;i<c;i++){
			cout<<a[h][i]<<" ";
		}
		h++;
		for(int j=h;j<r;j++){
			cout<<a[j][c-1]<<" ";
		}
		c--;
		for(int i=c-1;i>=w;i--){
			cout<<a[r-1][i]<<" ";
		}
		r--;
		for(int j=r-1;j>=h;j--){
			cout<<a[j][w]<<" ";
		}
		w++;
	}
	return 0;

}