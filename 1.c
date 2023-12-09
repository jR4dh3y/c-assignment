#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i, words = 0;

    printf("Enter the string: ");
    scanf("%[^\n]s", s);

    for (i = 0; s[i]; i++)
    {
        if (s[i] == ' ')
            words++;
    }

    if (i > 0)
        words++;

    printf("Number of words in the string: %d\n", words);

m    return 0;
}