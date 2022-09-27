// Palindrome check using character string

#include <iostream>
using namespace std;

bool palindrome(char seq[], int len)
{
    for (int i = 0; i < len / 2; i++)
        if (seq[i] != seq[len - 1 - i])
            return false;
    return true;
}

int length(char seq[])
{
    int count = 0;
    for (int i = 0; seq[i] != '\0'; i++)
        count++;
    return count;
}

int main()
{
    char seq[20];
    cout << "Enter the sequence: ";
    cin >> seq;
    int len = length(seq);
    bool check = palindrome(seq, len);
    if (check)
        cout << "Given sequence is palindrome";
    else
        cout << "Given sequence is not palindrome";
}

/*

Output of the code:

Enter the sequence: racecar
Given sequence is palindrome

Enter the sequence: youtube
Given sequence is not palindrome

*/
