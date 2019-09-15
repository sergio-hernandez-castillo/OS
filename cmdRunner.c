/*
 * <Sergio Hernandez Castillo>:<A01025210>
 * Program that runs command lines in the terminal through its input.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/signal.h>

int main(int argc, char *argv[])
{
	char *arg1 = argv[1]; 
	char *arg2 = argv[2]; 
	
	execlp(arg1, arg1, arg2, NULL);
	
	return 0;
}//Close main 
