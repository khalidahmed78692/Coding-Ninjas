#include <iostream>
using namespace std;

int main()
{
    int m, n, i, j, k;
    cout << "Enter the number of rows and columns respectively: ";
    cin >> m >> n;
    int a[m][n];
    cout << "Enter elements\n";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    cout << "Printing 2D array\n";
    for (i = 0; i < m; i++)
        for (k = m - i; k > 0; k--)
        {
            for (j = 0; j < n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
}

/*

Output of the code:

Enter the number of rows and columns respectively: 3 5
Enter elements
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
Printing 2D array
1 2 3 4 5        
1 2 3 4 5 
1 2 3 4 5
6 7 8 9 10 
6 7 8 9 10
11 12 13 14 15



Enter the number of rows and columns respectively: 5 2
Enter elements
1 2
3 4
5 6
7 8
9 10
Printing 2D array
1 2
1 2
1 2
1 2
1 2
3 4
3 4
3 4
3 4
5 6
5 6
5 6
7 8
7 8
9 10

*/
