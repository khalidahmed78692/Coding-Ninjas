#include <iostream>
using namespace std;

int main()
{
    int n, m, t, i, j, largest, flag, index;
    cout << "Enter number of test cases: ";
    cin >> t;
    while (t--)
    {
        cout << "Enter the number of rows and columns respectively: ";
        cin >> n >> m;
        int a[n][m], sumr[n], sumc[m];
        for (i = 0; i < n; i++)
            sumr[i] = 0;
        for (i = 0; i < m; i++)
            sumc[i] = 0;
        cout << "Enter elements\n";
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
            {
                cin >> a[i][j];
                sumr[i] += a[i][j];
                sumc[j] += a[i][j];
            }
        largest = sumr[0];
        flag = 0;
        index = 0;
        for (i = 1; i < n; i++)
            if (largest < sumr[i])
            {
                largest = sumr[i];
                flag = 0;
                index = i;
            }
        for (i = 0; i < m; i++)
            if (largest < sumc[i])
            {
                largest = sumc[i];
                flag = 1;
                index = i;
            }
        if (flag)
            cout << "Column " << index << " " << largest << endl;
        else
            cout << "Row " << index << " " << largest << endl;
    }
}

/*

Output of the code:

Enter number of test cases: 1
Enter the number of rows and columns respectively: 2 2
Enter elements
1 1 
1 1
Row 0 2


Enter number of test cases: 2
Enter the number of rows and columns respectively: 3 3
Enter elements
3 6 9
1 4 7
2 8 9
Column 2 25
Enter the number of rows and columns respectively: 4 2
Enter elements
1 2
90 100
3 40
-10 200
Column 1 342

*/
