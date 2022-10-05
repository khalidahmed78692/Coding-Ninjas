#include <stdio.h>

void insertion_sort(int array[], int n)
{
    int i, j, current;
    for (i = 1; i < n; i++)
    {
        current = array[i];
        for (j = i - 1; j >= 0; j--)
            if (current < array[j])
                array[j + 1] = array[j];
            else
                break;
        array[j + 1] = current;
    }
}

int main()
{
    int t, n, i;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    while (t--)
    {
        printf("Enter the size of the array: ");
        scanf("%d", &n);
        int array[n];
        printf("Enter %d elements: ", n);
        for (i = 0; i < n; i++)
            scanf("%d", &array[i]);
        insertion_sort(array, n);
        printf("The sorted array is:");
        for (i = 0; i < n; i++)
            printf("\t%d", array[i]);
        printf("\n");
    }
}

/*

Output of the code:

Enter the number of test cases: 1
Enter the size of the array: 5
Enter 5 elements: 1 9687 16 321 354
The sorted array is:    1       16      321     354     9687


*/
