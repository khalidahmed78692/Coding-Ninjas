#include <iostream>
using namespace std;

int main()
{
    int t, n, m, i, j;
    cout << "Enter the number of test cases: ";
    cin >> t;
    while (t--)
    {
        cout << "Enter the number of rows and columns respectively: ";
        cin >> n >> m;
        int a[n][m];
        cout << "Enter " << n << "x" << m << "=" << n * m << " elements\n";
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                cin >> a[i][j];
        cout << "Printing in wave form: ";
        for (j = 0; j < m; j++)
            if (j % 2 == 0)
                for (i = 0; i < n; i++)
                    cout << a[i][j] << " ";
            else
                for (i = n - 1; i >= 0; i--)
                    cout << a[i][j] << " ";
        cout << endl;
    }
}

/*

Output of the code:

Enter the number of test cases: 1
Enter the number of rows and columns respectively: 3 3
Enter 3x3=9 elements
1 2 3
4 5 6
7 8 9
Printing in wave form: 1 4 7 8 5 2 3 6 9 



Enter the number of test cases: 2
Enter the number of rows and columns respectively: 4 5
Enter 4x5=20 elements
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
Printing in wave form: 1 6 11 16 17 12 7 2 3 8 13 18 19 14 9 4 5 10 15 20 
Enter the number of rows and columns respectively: 3 4
Enter 3x4=12 elements
1 2 3 4
5 6 7 8
9 10 11 12
Printing in wave form: 1 5 9 10 6 2 3 7 11 12 8 4 

*/
