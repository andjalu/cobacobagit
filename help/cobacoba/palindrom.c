#include <stdio.h>
#include <string.h>

int main()
{
    char str[100]; // declare a string with maximum length 100
    int i, length, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str); // read the string from the user

    length = strlen(str); // calculate the length of the string

    // check if the string is a palindrome
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("The string is not a palindrome.\n");
    }
    else
    {
        printf("The string is a palindrome.\n");
    }

    return 0;
}