#include<iostream>
using namespace std;
int main(){
    int t,p,g,a[10],b[10],sum=0;
    cout<<"Enter no. of test cases you want "<<endl;
    cin>>t;
    while(t>0){
    cout<<"Enter the price of green and purple balloon "<<endl;
    cin>>g>>p;
    cout<<"Fill 1 if the problem is solved else filled with 0"<<endl;
    for(int i=0;i<10;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<10;i++){
        sum+=a[i]*g+b[i]*p;
    }
    cout<<sum<<endl;
    }
    return 0;

}