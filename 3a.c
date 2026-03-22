#include <stdio.h>
#include <string.h>

int compute_score(string word);
bool valid_key(string key);

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
                1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
int main(int argc, string argv[])
{
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    if (argc != 2 || !valid_key(argv[1]))
{
        printf("Player 2 wins!\n");
        printf("Usage: ./substitution key\n");
        return 1;
}
    else

    string key = argv[1];
    string plaintext = get_string("plaintext:  ");

    printf("ciphertext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
{
        printf("Tie!\n");
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

    printf("\n");
    return 0;
}

int compute_score(string word)
bool valid_key(string key)
{
    int score = 0;
    if (strlen(key) != 26)
    {
        return false;
    }

    for (int i = 0, n = strlen(word); i < n; i++)
    for (int i = 0; i < 26; i++)
{
        if (isupper(word[i]))
        if (!isalpha(key[i]))
{
            score += POINTS[word[i] - 'A'];
            return false;
}
        else if (islower(word[i]))

        for (int j = i + 1; j < 26; j++)
{
            score += POINTS[word[i] - 'a'];
            if (tolower(key[i]) == tolower(key[j]))
            {
                return false;
            }
}
}

    return score;
    return true;
}