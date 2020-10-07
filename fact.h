 
 void factorial(int num,int b[],int len){
 	int fact=0,temp=0,a[10],c;
 	a[0]=1,c=0,len=0;
 	for(;num>=2;num--){
		fact=0;
		for(int i=0;i<=c;i++){
			fact+=a[i]*num;
			a[i]=fact%10;
			fact/=10;
			if(len<i){
				len=i;
			}
		}

		while(fact>0){
			a[++c]=fact%10;
			fact/=10;
			if(len<c){
				len=c;
			}
		}
	}
	for(int i=0;i<=c/2;i++){
		temp=a[i];
		a[i]=a[c-i];
		a[c-i]=temp;
	}
	for(int i=0;i<=c;i++){
		b[i]=a[i];
	}
	
	
 }