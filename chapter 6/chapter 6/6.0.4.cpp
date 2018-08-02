#include<stdio.h>
int main()
{
	int m,n;
	int i;
	int count=0;
	int sum=0;
	scanf("%d %d", &m,&n);
	for(i=m;i<=n;i++){
		int isPrime =1;
		int j;
		for (j=2;j<i;j++){
			if (i%j==0){
				isPrime=0;
				break;
			}
	}
		if (isPrime==1){
			count++;
			sum+=i;
		}	
	} 	
	printf("%d %d",count,sum);	
	return 0;	
}

