#include<stdio.h>
int main(){
	float a,b,c;
	a = 1.345f;
	b = 1.123f;
	c = a+b;
	if (c == 2.468)
		printf("equal\n");
	else
		printf("not equal c=%.10f or %f\n",c,c);
}
