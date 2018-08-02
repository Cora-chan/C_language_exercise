#include<stdio.h>
int main() {
	int a;
	int n;
	int ret;
	int mask=1;
	int sum=0;
	int i;
	scanf("%d %d", &a, &n);
	sum =a;
	ret=a;
	for(i=1;i<=n-1;i++){
		mask =mask*10;
		a = ret*mask+a;
		sum +=a;
	}
	printf("%d ",sum);
	return 0;
}
