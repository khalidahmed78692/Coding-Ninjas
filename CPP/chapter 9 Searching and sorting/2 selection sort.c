#include <stdio.h>

void selection_sort(int array[], int n)
{
    int i, j, swap;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (array[i] > array[j])
            {
                swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
}

int main()
{
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d elements of the array: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    selection_sort(array, n);
    printf("The sorted array is:");
    for (i = 0; i < n; i++)
        printf("\t%d", array[i]);
    return 0;
}

/*

Output of the code:

Enter the size of the array: 6
Enter 6 elements of the array: 1 98 4 9687 15 484  
The sorted array is:    1       4       15      98      484     9687

*/
