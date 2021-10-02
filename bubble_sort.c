#include <stdio.h>
#define MAX_SIZE 10

int main()
{
    int arr[MAX_SIZE] = {9, 4, 6, 8, 6, 2, 1, 3, 4, 6};
    printf("Array before sotring: ");
    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < MAX_SIZE; i++)
    {
        for (int j = 0; j < MAX_SIZE; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nArray after sotring: ");
    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}