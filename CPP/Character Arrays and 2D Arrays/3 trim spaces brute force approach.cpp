#include <iostream>
using namespace std;

void trimSpaces(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ')
            for (int j = i; str[j] != '\0'; j++)
                str[j] = str[j + 1];
}

int main()
{
    char str[100];
    cout << "Enter the words: ";
    cin.getline(str, 100);
    trimSpaces(str);
    cout << "Spaces trimmed string is: " << str;
}

/*

Output of the code:

Enter the words: Hi this is brute force approach 
Spaces trimmed string is: Hithisisbruteforceapproach

*/
