#include <stdio.h>
int main() {
	int a;
	int i; 
	int j;
	int k;
	int count=0;
	scanf("%d", &a);
	
	for(i=a;i<=a+3;i++){
		for(j=a;j<=a+3;j++){
			for(k=a;k<=a+3;k++){
				if (i !=k){
					if(j !=i){
						if(k !=j){
							printf("%d%d%d", i,j,k);
							count ++;
							if (count==6){
								printf("\n");
								count=0;
								}else {
									printf(" ");
								}
							}
							
						}
					}
					
				}
			}
		}
	
	return 0;
}
	
