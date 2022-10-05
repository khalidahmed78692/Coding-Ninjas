#include <iostream>
using namespace std;

void insertion_sort(int array[], int n)
{
    int current, i, j;
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
    cout << "Enter the number of test cases: ";
    cin >> t;
    while (t--)
    {
        cout << "Enter the size of the array: ";
        cin >> n;
        int array[n];
        cout << "Enter " << n << " elements: ";
        for (i = 0; i < n; i++)
            cin >> array[i];
        insertion_sort(array, n);
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
Enter 7 elements: 1 567456 1843 1651 51165 41 61
The sorted array is:    1       41      61      1651    1843    51165   567456
Enter the size of the array: 9
Enter 9 elements:  984 1 5646 687 13 165 321 54 56         
The sorted array is:    1       13      54      56      165     321     687     984     5646

*/
