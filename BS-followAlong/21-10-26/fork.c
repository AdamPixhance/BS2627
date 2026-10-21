#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    puts("Hello, this is the beginning!");

    pid_t pid = fork();
    if (pid == -1) // chck if the fork even worked! It would not work if
    {
        puts("failed to create child!");
        exit(1);
    }
    else if (pid == 0) // giving different behaviour to the child and parent
    {
        puts("Hello from the child!");
    }
    else
    {
        printf("Hello from the parent, child has pid: %i\n", pid); // in our test case, the parent ran first. But thats not always the case!
    }
    // fork(); // die gesammte Zustand in den gleichen Moment gecloned!
    // puts("Fork succeeded");
    /*
    fork(); output:
    Hello, this is the beginning!
    Goodbye!
    Goodbye!
    fork prozess ist zombie, parent endet, reaper adoptier kind and beendet auch!
    who runs first, parent or child is not defined
    */

    puts("Goodbye!");
    sleep(10); // ps a can get the pid of a running prozess (with sleep for example)
    return 0;  // $?
}