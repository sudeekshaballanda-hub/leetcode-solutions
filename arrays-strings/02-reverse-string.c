#include <stdio.h>
#include <string.h>

void reverseString(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;
    char temp;

    while (left < right)
    {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    // Test Case 1 - Typical case
    char str1[] = "hello";

    printf("Test Case 1:\n");
    printf("Input: hello\n");
    printf("Expected: olleh\n");

    reverseString(str1);

    printf("Output: %s\n", str1);

    printf("\n");

    // Test Case 2 - Edge case with single character
    char str2[] = "a";

    printf("Test Case 2:\n");
    printf("Input: a\n");
    printf("Expected: a\n");

    reverseString(str2);

    printf("Output: %s\n", str2);

    return 0;
}