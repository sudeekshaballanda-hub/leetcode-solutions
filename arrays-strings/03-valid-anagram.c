#include <stdio.h>
#include <string.h>

int isAnagram(char s[], char t[])
{
    int count[256] = {0};
    int i;

    if (strlen(s) != strlen(t))
        return 0;

    for (i = 0; s[i] != '\0'; i++)
        count[(unsigned char)s[i]]++;

    for (i = 0; t[i] != '\0'; i++)
        count[(unsigned char)t[i]]--;

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main()
{
    // Test Case 1 - Typical case
    char s1[] = "anagram";
    char t1[] = "nagaram";

    printf("Test Case 1:\n");
    printf("Input: anagram, nagaram\n");
    printf("Expected: Valid Anagram\n");

    if (isAnagram(s1, t1))
        printf("Output: Valid Anagram\n");
    else
        printf("Output: Not an Anagram\n");

    printf("\n");

    // Test Case 2 - Edge case
    char s2[] = "rat";
    char t2[] = "car";

    printf("Test Case 2:\n");
    printf("Input: rat, car\n");
    printf("Expected: Not an Anagram\n");

    if (isAnagram(s2, t2))
        printf("Output: Valid Anagram\n");
    else
        printf("Output: Not an Anagram\n");

    return 0;
}