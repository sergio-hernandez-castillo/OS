/*
 * <Sergio Hernandez Castillo>:<A01025210>
 */
 
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
  //fork() creates a child process identical to the parent
  pid_t newPID = fork();
  int answer;

  // if pid is greater than 0 than it is parent process
  // if pid is 0 then it is child process
  // if pid is -ve , it means fork() failed to create child process
  if (newPID > 0)
  {
	  wait(0); //The parent waits for the child to finish executing
  }//Close if

  else
  {
	  printf("Enter a number: ");
	  //The child will wait for an input to be entered
	  scanf("%d", &answer);
  }//Close else
}//Close main
