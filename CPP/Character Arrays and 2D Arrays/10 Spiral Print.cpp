#include <iostream>
using namespace std;

int main()
{
    int m, n, i, j, a, b, c, d;
    cout << "Enter the number of rows and columns respectively: ";
    cin >> m >> n;
    int ar[m][n];
    cout << "Enter elements\n";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> ar[i][j];
    a = 0, b = m - 1, c = 0, d = n - 1;
    cout << "Array in Spiral print: ";
    while (a <= b && c <= d)
    {
        for (i = c; i <= d; i++)
            cout << ar[a][i] << " ";
        a++;
        if (a <= b && c <= d)
            for (i = a; i <= b; i++)
                cout << ar[i][d] << " ";
        d--;
        if (a <= b && c <= d)
            for (i = d; i >= c; i--)
                cout << ar[b][i] << " ";
        b--;
        if (a <= b && c <= d)
            for (i = b; i >= a; i--)
                cout << ar[i][c] << " ";
        c++;
    }
}

/*

Output of the code:

Enter the number of rows and columns respectively: 4 5
Enter elements
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
Array in Spiral print: 1 2 3 4 5 10 15 20 19 18 17 16 11 6 7 8 9 14 13 12 



Enter the number of rows and columns respectively: 6 7
Enter elements
1 2 3 4 5 6 7
8 9 10 11 12 13 14
15 16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 31 32 33 34 35
36 37 38 39 40 41 42
Array in Spiral print: 1 2 3 4 5 6 7 14 21 28 35 42 41 40 39 38 37 36 29 22 15 8 9 10 11 12 13 20 27 34 33 32 31 30 23 16 17 18 19 26 25 24 

*/
