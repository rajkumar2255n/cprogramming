#include <stdio.h>
int main()
{
    int choice;
    printf("\n\tEnter your choice for selecting Food item(1/2/3/4/5):");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            printf("\n\tFood item - IDLY(4)");
            printf("\n\tPrice - Rs 50");
            break;
        case 2:
            printf("\n\tFood item - DOSA(1)");
            printf("\n\tPrice - Rs 45");
            break;
        case 3:
            printf("\n\tFood item - VEN-PONGAL");
            printf("\n\tPrice - Rs 79");
            break;
        case 4:
            printf("\n\tFood item - MEALS");
            printf("\n\tPrice - Rs 99");
            break;
        case 5:
            printf("\n\tFood item - BIRIYANI(veg)");
            printf("\n\tPrice - Rs 149");
            break;
        default:
            printf("\n\tNo More choice will be choosen it\'s a vegetarian Restarent...\n\tOnly five dish");
            printf("\n\tYour choice should be less than equal to 5");
    }
   return 0;
}
