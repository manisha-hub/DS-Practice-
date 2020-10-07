#include<iostream>
using namespace std;
int main()
{
	int a[10000],p,b,c,k,multiply,j=0;
	a[0]=1,c=0;
	cout<<"Enter two numbers "<<endl;
	cin>>p>>b;
	while(b>0){
		multiply=0;
		k=b%10;
		b/=10;
		for(int i=j;i<=c;i++){
			multiply+=a[i]*p*k;
			a[i]=multiply%10;
			multiply/=10;
		}
		while(multiply>0){
			a[++c]=multiply%10;
			multiply/=10;
		}
		j++;
		c++;
	}
	for(int i=c;i>=0;i--){
		cout<<a[i];
	}
	return 0;
}