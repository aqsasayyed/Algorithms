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
    for (int i = 1; i < MAX_SIZE; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
        }
        for (int j = i - 1; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
        printf("\n[%d] ", i);
        for (int i = 0; i < MAX_SIZE; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n\nArray before sotring: ");
    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}