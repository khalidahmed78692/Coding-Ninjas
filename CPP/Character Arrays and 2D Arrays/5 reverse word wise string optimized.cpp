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
    int len = length(s), temp;
    for (int i = 0; i < len / 2; i++)
    {
        temp = s[i];
        s[i] = s[len - i - 1];
        s[len - 1 - i] = temp;
    }
    int i = 0;
    while (i < len)
    {
        int k = i;
        while (s[i] != ' ' && i < len)
            i++;
        int j = i - 1;
        while (k < j)
        {
            temp = s[k];
            s[k] = s[j];
            s[j] = temp;
            k++;
            j--;
        }
        i++;
    }
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

Enter the sentence: hi this is sentence 
Reverse word wise sentence is: sentence is this hi

*/
