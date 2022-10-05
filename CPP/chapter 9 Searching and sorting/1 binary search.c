#include <stdio.h>

int binary_search(int array[], int s, int e, int search)
{
    int mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (array[mid] == search)
            return mid;
        else if (array[mid] > search)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}

int main()
{
    int index, t, n, i, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    while (t--)
    {
        printf("Enter the search element(x): ");
        scanf("%d", &x);
        index = binary_search(array, 0, n - 1, x);
        printf("Index of search element is: %d\n", index);
    }
}

/*

Output of the code:

Enter the size of the array: 4
Enter 4 elements: 12 45 78 96
Enter the number of test cases: 3
Enter the search element(x): 12
Index of search element is: 0
Enter the search element(x): 78
Index of search element is: 2
Enter the search element(x): 164
Index of search element is: -1

*/
