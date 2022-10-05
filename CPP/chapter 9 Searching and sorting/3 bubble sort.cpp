#include <iostream>
using namespace std;

void bubble_sort(int array[], int n)
{
    int i, j, swap;
    for (i = 1; i <= n - 1; i++)
        for (j = 0; j < n - i; j++)
            if (array[j] > array[j + 1])
            {
                swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
}

int main()
{
    int t, n, i;
    cout << "Enter the number of test cases: ";
    cin >> t;
    while (t--)
    {
        cout << "Enter the size of the array: ";
        cin >> n;
        int array[n];
        cout << "Enter " << n << " elements of the array: ";
        for (i = 0; i < n; i++)
            cin >> array[i];
        bubble_sort(array, n);
        cout << "The sorted array is:";
        for (i = 0; i < n; i++)
            cout << "\t" << array[i];
		cout << endl;
    }
}

/*

Output of the code:

Enter the number of test cases: 2
Enter the size of the array: 7
Enter 7 elements of the array: 4 984 51 657 686 16 1
The sorted array is:    1       4       16      51      657     686     984
Enter the size of the array: 5
Enter 5 elements of the array: 21 987 516 5 21
The sorted array is:    5       21      21      516     987

*/
