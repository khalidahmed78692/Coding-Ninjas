#include <stdio.h>

void merge_two_sorted_arrays(int array1[], int m, int array2[], int n)
{
    int i, j, k, array[m + n];
    for (i = 0, j = 0, k = 0; i < m && j < n;)
        if (array1[i] < array2[j])
            array[k++] = array1[i++];
        else
            array[k++] = array2[j++];
    if (m > n)
        while (i < m)
            array[k++] = array1[i++];
    else
        while (j < n)
            array[k++] = array2[j++];
    printf("The merged and sorted array is:");
    for (i = 0; i < m + n; i++)
        printf("\t%d", array[i]);
}

int main()
{
    int t, m, n, i;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    while (t--)
    {
        printf("Enter the size of the array 1: ");
        scanf("%d", &m);
        int array1[m];
        printf("Enter %d elements: ", m);
        for (i = 0; i < m; i++)
            scanf("%d", &array1[i]);
        printf("Enter the size of the array 2: ");
        scanf("%d", &n);
        int array2[n];
        printf("Enter %d elements: ", n);
        for (i = 0; i < n; i++)
            scanf("%d", &array2[i]);
        merge_two_sorted_arrays(array1, m, array2, n);
        printf("\n");
    }
}

/*

Output of the code:

Enter the number of test cases: 1
Enter the size of the array 1: 6
Enter 6 elements: 12 45 78 96 102 136
Enter the size of the array 2: 2
Enter 2 elements: 1 2
The merged and sorted array is: 1       2       12      45      78      96      102     136

*/
