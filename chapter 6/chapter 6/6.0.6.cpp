#include<stdio.h>
int main()
{
	int n;
	double sum=0.0;
	double dividend, divisor;
	int i;
	double t;
	scanf("%d", &n);
	dividend=2;
	divisor=1;
	for (i=1;i<=n;i++){
		sum +=dividend/divisor;	
		t=dividend;
		dividend +=divisor;
		divisor=t;
	}
	printf("%.2f\n",sum);
	return 0;
}
