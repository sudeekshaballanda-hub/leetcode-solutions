#include <stdio.h>
#include <string.h>

int isValid(char str[])
{
    char stack[10000];
    int top = -1;
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            stack[++top] = ch;
        }
        else
        {
            if (top == -1)
                return 0;

            char topChar = stack[top--];

            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '['))
            {
                return 0;
            }
        }
    }

    return top == -1;
}

int main()
{
    // Test Case 1 - Typical case
    char str1[] = "()[]{}";

    printf("Test Case 1:\n");
    printf("Input: ()[]{ }\n");
    printf("Expected: Valid\n");

    if (isValid(str1))
        printf("Output: Valid\n");
    else
        printf("Output: Invalid\n");

    printf("\n");

    // Test Case 2 - Edge case
    char str2[] = "(]";

    printf("Test Case 2:\n");
    printf("Input: (]\n");
    printf("Expected: Invalid\n");

    if (isValid(str2))
        printf("Output: Valid\n");
    else
        printf("Output: Invalid\n");

    return 0;
}