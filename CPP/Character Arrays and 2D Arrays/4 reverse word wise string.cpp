#include <iostream>
using namespace std;

int length(char s[])
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
        count++;
    return count;
}

void reverseWordWise(char s[])
{
    int j, len = length(s), i = len - 1, k = 0;
    char sentence[100];
    while (i >= 0)
    {
        while (s[i] != ' ' && i >= 0)
            i--;
        j = i + 1;
        while (s[j] != ' ' && j < len)
            sentence[k++] = s[j++];
        sentence[k++] = ' ';
        i--;
    }
    for (i = 0; i < len; i++)
        s[i] = sentence[i];
}

int main()
{
    char sentence[100];
    cout << "Enter the sentence: ";
    cin.getline(sentence, 100);
    reverseWordWise(sentence);
    cout << "Reverse word wise sentence is: " << sentence;
}

/*

Output of the code:

Enter the sentence: this code is written by khalid on his own
Reverse word wise sentence is: own his on khalid by written is code this

*/
