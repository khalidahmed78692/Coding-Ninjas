#include <iostream>
using namespace std;

void selection_sort(int array[], int n)
{
    int swap, i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[i])
            {
                swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
        }
    }
}

int main()
{
    int n, i;
    cout << "Enter the size of the array: ";
    cin >> n;
    int array[n];
    cout << "Enter " << n << " elements of the array: ";
    for (i = 0; i < n; i++)
        cin >> array[i];
    selection_sort(array, n);
    cout << "The sorted array is:";
    for (i = 0; i < n; i++)
        cout << "\t" << array[i];
}

/*

Output of the code:

Enter the size of the array: 5
Enter 5 elements of the array: 1 6456 4987 51 456
The sorted array is:    1       51      456     4987    6456

*/
