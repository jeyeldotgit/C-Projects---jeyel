#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (void)
{
    int Hours, Minutes, Seconds;
    Hours = 0;
    Minutes = 0;
    Seconds = 0;


    //PRINTING TIME AND USER INPUT
    do
    {
        printf("Enter Hours: ");
        scanf("%i", &Hours);
    }
    while (Hours > 24 || Hours < 0);

    do
    {
        printf("Enter Minutes: ");
        scanf("%i", &Minutes);

    }
    while(Minutes < 0 || Minutes > 60);

    do
    {
        printf("Enter Seconds: ");
        scanf("%i", &Seconds);
    }
    while(Seconds < 0 || Seconds > 60);

        //SETTING UP AN INFINITE LOOP
    while(1)
    {
        system("cls");
        printf("%02i : %02i : %02i\n", Hours, Minutes, Seconds);

        Seconds++;

        //INCREMENTING THE VARIABLES
        if(Seconds == 60)
        {
            Minutes++;
            Seconds = 0;
        }

        if(Minutes == 60)
        {
            Hours++;
            Minutes = 0;
        }

        if(Hours == 24)
        {
            Seconds = 0;
            Minutes = 0;
            Hours =0;
        }

        if(Hours == 0 && Minutes == 0 && Seconds == 0)
        {
            printf("Shit twelve na mag iibang anyo nakooo\n");
            printf("bye!");
        }

        sleep(1);
    }


    return 0;
}
