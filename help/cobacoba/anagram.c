#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i, j, len1, len2, found = 0, not_found = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    // check if the lengths of the strings are equal
    if (len1 != len2)
    {
        printf("Entered strings are not anagrams.\n");
        return 0;
    }

    // sort the strings
    for (i = 0; i < len1 - 1; i++)
    {
        for (j = i + 1; j < len1; j++)
        {
            if (str1[i] > str1[j])
            {
                char temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
            if (str2[i] > str2[j])
            {
                char temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    // compare the sorted strings
    for (i = 0; i < len1; i++)
    {
        if (str1[i] == str2[i])
        {
            found = 1;
        }
        else
        {
            not_found = 1;
            break;
        }
    }

    if (found == 1 && not_found == 0)
    {
        printf("Entered strings are anagrams.\n");
    }
    else
    {
        printf("Entered strings are not anagrams.\n");
    }

    return 0;
}
