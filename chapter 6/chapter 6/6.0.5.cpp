#include<stdio.h>
int main()
{
	int number,n;
	int inp;
	int finished =0;
	int count=0;
	scanf("%d %d", &number, &n);
	do{
		scanf("%d", &inp);
		count++;
		if (inp<0){
			printf("Game Over\n");
			finished=1;
		} else if(inp > number){
			printf("Too big\n");
		  }else if(inp <number){
		  	printf("too small\n");
		  	}else{
		  		if (count ==1){
		  			printf("Bingo!\n");
		  			}else if(count<=3){
		  				printf("Lucky you!\n");
		  				}else{
		  					printf("Good Guess!\n");
						  }
						  finished =1;
					  }
						if (count ==n ){
							if (!finished){
								printf("game over\n");
								finished=1;
							}
						}				  
				  
			  }while( !finished);
		  
		 return 0; 
		
	
	
	
	
	
	
}
