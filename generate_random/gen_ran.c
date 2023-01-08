#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    srand(time(0));
    int numbers, max, min, flag = 1, nbr;

    printf("Enter how many numbers do you want to generate: ");
    scanf("%d", &numbers);
    printf("Enter the MIN value: ");
    scanf("%d", &min);
    printf("Enter the MAX value: ");
    scanf("%d", &max);

    int arr[numbers];

    for (int i = 0; i < numbers; i++)
    {
        while (1)
        {
            nbr = rand() % (max - min + 1) + min;
            int count = 0;
            for (int j = 0; j < numbers; j++)
            {
                if (arr[j] == nbr)
                    break;
                else
                    count++;
            }
            if (count == numbers)
                break;
        }
        arr[i] = nbr;
        printf("%d ", arr[i]);
    }

    return (0);
}