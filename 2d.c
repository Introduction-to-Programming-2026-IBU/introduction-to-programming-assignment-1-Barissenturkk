#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int cents;
bool valid_key(string key);

    do
int main(int argc, string argv[])
{
    if (argc != 2 || !valid_key(argv[1]))
    {
        cents = get_int("Change owed: ");
        printf("Usage: ./substitution key\n");
        return 1;
    }
    while (cents < 0);

    int coins = 0;
    string key = argv[1];
    string plaintext = get_string("plaintext:  ");

    printf("ciphertext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char c = plaintext[i];

        if (isupper(c))
        {
            int index = c - 'A';
            printf("%c", toupper(key[index]));
        }
        else if (islower(c))
        {
            int index = c - 'a';
            printf("%c", tolower(key[index]));
        }
        else
        {
            printf("%c", c);
        }
    }

    coins += cents / 25;
    cents %= 25;
    printf("\n");
    return 0;
}

    coins += cents / 10;
    cents %= 10;
bool valid_key(string key)
{
    if (strlen(key) != 26)
    {
        return false;
    }

    coins += cents / 5;
    cents %= 5;
    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i]))
        {
            return false;
        }

    coins += cents;
        for (int j = i + 1; j < 26; j++)
        {
            if (tolower(key[i]) == tolower(key[j]))
            {
                return false;
            }
        }
    }

    printf("%i\n", coins);
    return true;
}