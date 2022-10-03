#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n], i, j;
    cout << "Enter elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    int flag;
    cout << "Leaders in array are: ";
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = i + 1; j < n; j++)
            if (a[i] < a[j])
            {
                flag = 1;
                break;
            }
        if (!flag)
            cout << a[i] << " ";
    }
    cout << a[n - 1];
}

/*

Output of the code:

Enter the size of the array: 8
Enter elements: 1 2 3 4 5 6 7 8
Leaders in array are: 8


Enter the size of the array: 4
Enter elements: 4 3 2 1
Leaders in array are: 4 3 2 1


Enter the size of the array: 6
Enter elements: 3 12 34 2 0 -1
Leaders in array are: 34 2 0 -1


Enter the size of the array: 5
Enter elements: 13 17 5 4 6
Leaders in array are: 17 6

*/
