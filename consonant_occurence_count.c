#include <stdio.h>

int main()
{
    char str[100];
    int count[26] = {0};
    int i = 0;
    char ch;

    printf("Enter a sentence:\n");

    while (i < 99)
    {
        ch = getchar();
        if (ch == '\n')
            break;
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    i = 0;
    while (str[i] != '\0')
    {
        ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if (ch >= 'A')
            {
                if (ch <= 'Z')
                {
                    ch = ch + ('a' - 'A');
                }
            }
            if (ch != 'a')
            {
                if (ch != 'e')
                {
                    if (ch != 'i')
                    {
                        if (ch != 'o')
                        {
                            if (ch != 'u')
                            {
                                count[ch - 'a']++;
                            }
                        }
                    }
                }
            }
        }
        i++;
    }
    printf("Consonant occurrence count:\n");
    for (i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            if ((i + 'a') != 'a')
            {
                if ((i + 'a') != 'e')
                {
                    if ((i + 'a') != 'i')
                    {
                        if ((i + 'a') != 'o')
                        {
                            if ((i + 'a') != 'u')
                            {
                                printf("%c: %d\n", i + 'a', count[i]);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
