#include <stdio.h>
int search(int array[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (array[i] == x)
            return i;
    return -1;
}
int main(void)
{
    int array[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int N = sizeof(array) / sizeof(array[0]);
    int result = search(array, N, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}
