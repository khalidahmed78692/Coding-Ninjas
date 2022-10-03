#include <iostream>
using namespace std;

int main()
{
    int m, n, i, j;
    cout << "Enter m and n respectively: ";
    cin >> m >> n;
    int a[m][n], sum[n];
    for (i = 0; i < n; i++)
        sum[i] = 0;
    cout << "Enter " << m << "x" << n << "=" << m * n << " elements\n";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            sum[j] += a[i][j];
    cout << "Column wise sum is\n";
    for (i = 0; i < n; i++)
        cout << sum[i] << " ";
}

/*

Output of the code:

Enter m and n respectively: 3 3
Enter 3x3=9 elements
1 2 3
4 5 6
7 8 9
Column wise sum is
12 15 18



Enter m and n respectively: 5 3
Enter 5x3=15 elements
15 16 16     
1 546 1 
1 6 161
1 655 1
748  456 4
Column wise sum is
766 1679 183

*/
