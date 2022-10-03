#include <iostream>
using namespace std;

int main()
{
    char s[100];
    cout << "Enter the sentence: ";
    cin.getline(s, 100);
    int i = 0, count, temp, index, smallest = INT_MAX;
    while (s[i] != '\0')
    {
        temp = i;
        count = 0;
        while (s[i] != ' ' && s[i] != '\0')
        {
            i++;
            count++;
        }
        if (count < smallest)
        {
            smallest = count;
            index = temp;
        }
        if (s[i] == ' ')
            i++;
    }
    cout << "The smallest word is: ";
    while (smallest)
    {
        cout << s[index++];
        smallest--;
    }
}

/*

Output of the code:

Enter the sentence: this program is to find the minimum length word in a given sentence
The smallest word is: a



Enter the sentence: asoga gvoajrfg vaordrgnva dfvganodsvgnao aksjfa vask
The smallest word is: vask

*/
