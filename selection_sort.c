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
    printf("\n\n");
    for (int i = 1; i < MAX_SIZE; i++)
    {
        int min = i;
        for (int j = i; j < MAX_SIZE; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i - 1];
        arr[i - 1] = temp;
        printf("\n[%d] ", i);
        for (int i = 0; i < MAX_SIZE; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n\nArray after sotring: ");
    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}