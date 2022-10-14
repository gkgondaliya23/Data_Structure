// Insertion Sort method
#include <stdio.h>
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
void insertSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && temp <= arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[] = {1, 12, 25, 6, 18, 36, 9, 40, 11, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting displaying Array: \n");
    display(arr, n);

    insertSort(arr, n);
    printf("\nAfter sorting displaying Array: \n");
    display(arr, n);
}