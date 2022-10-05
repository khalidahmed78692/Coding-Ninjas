#include <stdio.h>

void bubble_sort(int array[], int n)
{
    int i, j, swap;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (array[j] > array[j + 1])
            {
                swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
}

int main()
{
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    bubble_sort(array, n);
    printf("The sorted array is:");
    for (i = 0; i < n; i++)
        printf("\t%d", array[i]);
}

/*

Output of the code:

Enter the size of the array: 8
Enter 8 elements:  198 421 54 198 451 46 1654 5
The sorted array is:    5       46      54      198     198     421     451     1654

*/
