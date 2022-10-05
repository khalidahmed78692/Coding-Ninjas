#include <iostream>
using namespace std;

int binary_search(int array[], int s, int e, int x)
{
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (array[mid] == x)
            return mid;
        else if (array[mid] > x)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}

int main()
{
    int n, t, x, index;
    cout << "Enter the size of the array: ";
    cin >> n;
    int array[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> array[i];
    cout << "Enter the number of test cases: ";
    cin >> t;
    while (t--)
    {
        cout << "Enter the search element: ";
        cin >> x;
        index = binary_search(array, 0, n - 1, x);
        cout << "The index of search element is: " << index << endl;
    }
}

/*

Output of the code:

Enter the size of the array: 6
Enter 6 elements: 1 2 3 4 5 6
Enter the number of test cases: 4
Enter the search element: 3
The index of search element is: 2
Enter the search element: 6
The index of search element is: 5
Enter the search element: 12
The index of search element is: -1
Enter the search element: 0
The index of search element is: -1

*/
