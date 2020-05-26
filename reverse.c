#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[20], limit, count;
    printf("Enter Limit:\t");
    scanf("%d", &limit);
    printf("\nEnter %d Elements in 1-Dimensional Array\n", limit);
    for(count = 0; count < limit; count++)
    {
        scanf("%d", &arr[count]);
    }
    printf("\nArray Elements\n");
    for(count = 0; count < limit; count++)
    {
        printf("%d\t", arr[count]);
    }
    printf("\nReverse of Array\n");
    for(count = limit - 1; count >= 0; count--)
    {
        printf("%d\t", arr[count]);
    }
    printf("\n");
    getch();
    return 0;

}

