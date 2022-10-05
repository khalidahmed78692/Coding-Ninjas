#include <iostream>
using namespace std;

void merge_two_sorted_arrays(int array1[], int m, int array2[], int n)
{
    int i = 0, j = 0, k = 0, array[m + n];
    while (i < m && j < n)
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
    cout << "The merged and sortd array is:";
    for (i = 0; i < m + n; i++)
        cout << "\t" << array[i];
}

int main()
{
    int t, n, m, i;
    cout << "Enter the number of test cases: ";
    cin >> t;
    while (t--)
    {
        cout << "Enter the size of the array 1: ";
        cin >> m;
        int array1[m];
        cout << "Enter " << m << " element: ";
        for (i = 0; i < m; i++)
            cin >> array1[i];
        cout << "Enter the size of the array 2: ";
        cin >> n;
        int array2[n];
        cout << "Enter " << n << " elements: ";
        for (i = 0; i < n; i++)
            cin >> array2[i];
        merge_two_sorted_arrays(array1, m, array2, n);
        cout << endl;
    }
}

/*

Output of the code:

Enter the number of test cases: 2
Enter the size of the array 1: 4
Enter 4 element: 1 2 3 4
Enter the size of the array 2: 5
Enter 5 elements: 5 6 7 8 9
The merged and sortd array is:  1       2       3       4       5       6       7       8       9
Enter the size of the array 1: 5
Enter 5 element: 1 51 54  78 78
Enter the size of the array 2: 4
Enter 4 elements: 12 45 78 96
The merged and sortd array is:  1       12      45      51      54      78      78      78      96

*/
