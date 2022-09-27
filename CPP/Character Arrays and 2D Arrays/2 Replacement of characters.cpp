#include <iostream>
using namespace std;

void replace(char character[], char c1, char c2)
{
    for (int i = 0; character[i] != '\0'; i++)
        if (character[i] == c1)
            character[i] = c2;
}

int main()
{
    char character[20], c1, c2;
    cout << "Enter the character sequence: ";
    cin >> character;
    cout << "Enter character c1 and c2 respectively: ";
    cin >> c1 >> c2;
    replace(character, c1, c2);
    cout << "Updated sequence is: " << character;
}

/*

Output of the code:

Enter the character sequence: happy
Enter character c1 and c2 respectively: p r
Updated sequence is: harry


Enter the character sequence: six
Enter character c1 and c2 respectively: s f
Updated sequence is: fix  

*/
