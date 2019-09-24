#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
  //fork() creates a child process identical to the parent
  pid_t newPID = fork();

  // if pid is greater than 0 than it is parent process
	// if pid is 0 then it is child process
	// if pid is -ve , it means fork() failed to create child process
  if (newPID > 0)
  {
    sleep(50); //The parent sleeps for 50 seconds
  }//Close if

  else
  {
    exit(0); //The child finishes execution
    //The child becomes a zombie until the parent wakes up and truly kills it
  }//Close else
}//Close main
