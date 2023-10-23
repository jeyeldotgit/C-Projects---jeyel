#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main (void)
{
        //Variable Initialization
    int side_A[10];
    int side_B[10];


        //prompt for user input
    for (int i = 0; i < 10; i++)
    {
        printf("Measurement of Side A #%i: ", i + 1);
        scanf("%i", &side_A[i]);
    }


    system("cls");

    for (int i = 0; i < 10; i++)
    {
        printf("Measurement of Side B #%i: ",i + 1);
        scanf("%i", &side_B[i]);
    }

    system ("cls");
    for (int i = 0; i < 10; i++)
    {
        // Initialize length_A and length_B inside the loop
        double length_A = (double)(side_A[i] * side_A[i]);
        double length_B = (double)(side_B[i] * side_B[i]);
        double hypotenuse = sqrt(length_A + length_B);
        printf("Hypotenuse for Triangle #%d: %.2lf\n", i + 1, hypotenuse);
        sleep(1);
    }
}

