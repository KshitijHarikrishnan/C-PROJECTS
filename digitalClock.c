//DIGITAL CLOCK in C.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <stdbool.h>
#include <unistd.h>

int main(){

    printf("24-HR DIGITAL CLOCK\n ");
    time_t rawtime = 0; //Epoch (Jan 1, 1970)
    struct tm *pTime = NULL;
    bool isRunning = true;

    while (isRunning)
    {
        time(&rawtime);

        pTime = localtime(&rawtime);

        printf("\r%d:%d:%d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
        /* "\r" - only changes the value which is changing.
        it moves the cursor to the beginning of the current line.*/


        Sleep(1000); // or sleep(1);
    }

    return 0;
}

