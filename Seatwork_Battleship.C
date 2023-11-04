#include <stdio.h>

int main (void)
{
    char Class_ID;
    char type_B[] = "Battleship";
    char type_C[] = "Cruiser";
    char type_D[] = "Destroyer";
    char type_E[] = "Trigate";
    

    printf("Enter Class ID: ");
    scanf("%c", &Class_ID);
    
    if(Class_ID == 'b' || 'B')
    {
        printf("The Class type is %s", type_B);
    }
    else if(Class_ID == 'c' || 'C')
    {
        printf("The Class Type is %s", type_C);
    }
    else if(Class_ID == 'd' || 'D')
    {
        printf("The Class Type is %s", type_D);
    }
    else if(Class_ID == 'e' || 'E')
    {
        ("The Class Type is %s", type_E);
    }
    else
    {
        printf("It's not a warship");
    }
}
