/*
 * <Sergio Hernandez Castillo>:<A01025210>
 * Program that runs command lines in the terminal through its input.
*/

#include <stdio.h>

int main(){
	int a=1;
	long b=1;
	float c=1.0;
	double d=1.0;
	char e='1';
	printf("%d\n", a);
	printf("The size of a is %ld\n", sizeof(a));
	printf("%ld\n", b);
	printf("The size of b is %ld\n", sizeof(b));
	printf("%f\n", c);
	printf("The size of c is %ld\n", sizeof(c));
	printf("%f\n", d);
	printf("The size of d is %ld\n", sizeof(d));
	printf("%c\n", e);
	printf("The size of e is %ld\n", sizeof(e));
	return 0;
}
