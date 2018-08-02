#include<stdio.h> 
int main () {
	int a,b;
	//int min;
	int i;
	int ret=0;
	int gcd=0;
	int dividend, divisor;
	scanf("%d %d",&a,&b);
	
	if (a!=b){
		//min = a;
		for(i=2;i<=a;i++){
			if(a%i==0){
				if(b%i==0){
					ret=i;
					//printf("%d ", ret);
				}
			}
		}
		
	 
	gcd=ret;
	dividend=a/gcd;
	divisor=b/gcd;
	printf("%d/%d",dividend,divisor);
}
	else{
		printf("1/1");	
	}
	//printf("%d",ret);
	return 0;
	
} 
