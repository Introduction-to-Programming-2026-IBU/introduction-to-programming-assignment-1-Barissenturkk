#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int height;
bool only_digits(string s);

    do
int main(int argc, string argv[])
{
    if (argc != 2 || !only_digits(argv[1]))
    {
        height = get_int("Height: ");
        printf("Usage: ./caesar key\n");
        return 1;
    }
    while (height < 1 || height > 8);

    for (int i = 1; i <= height; i++)
    int key = atoi(argv[1]);
    string plaintext = get_string("plaintext:  ");

    printf("ciphertext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        for (int j = 0; j < height - i; j++)
        char c = plaintext[i];

        if (isupper(c))
        {
            printf(" ");
            printf("%c", (c - 'A' + key) % 26 + 'A');
        }

        for (int k = 0; k < i; k++)
        else if (islower(c))
        {
            printf("#");
            printf("%c", (c - 'a' + key) % 26 + 'a');
        }
        else
        {
            printf("%c", c);
        }
    }

        printf("  ");
    printf("\n");
    return 0;
}

        for (int k = 0; k < i; k++)
bool only_digits(string s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (!isdigit(s[i]))
        {
            printf("#");
            return false;
        }

        printf("\n");
    }
    return true;
}