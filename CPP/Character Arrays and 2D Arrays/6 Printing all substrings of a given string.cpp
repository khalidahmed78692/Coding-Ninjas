#include <iostream>
using namespace std;

void subStrings(char s[])
{
    int i, j, k, count = 0;
    for (i = 0; s[i] != '\0'; i++)
        for (j = i; s[j] != '\0'; j++)
        {
            for (k = i; k <= j; k++)
                cout << s[k];
            cout << endl;
            count++;
        }
    cout << "Total number of substrings are: " << count;
}

int main()
{
    char str[100];
    cout << "Enter the string (no leading or trailing spaces): ";
    cin >> str;
    subStrings(str);
}

/*

Output of the code:

Enter the string (no leading or trailing spaces): string
s
st    
str   
stri  
strin 
string
t     
tr    
tri   
trin
tring
r
ri
rin
ring
i
in
ing
n
ng
g
Total number of substrings are: 21



Enter the string (no leading or trailing spaces): 16416464
1
16
164
1641
16416
164164
1641646
16416464
6
64
641
6416
64164
641646
6416464
4
41
416
4164
41646
416464
1
16
164
1646
16464
6
64
646
6464
4
46
464
6
64
4
Total number of substrings are: 36

*/
