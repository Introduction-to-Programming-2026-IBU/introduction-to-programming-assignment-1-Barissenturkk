#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    int height;
    string text = get_string("Text: ");

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    float L = ((float) letters / words) * 100;
    float S = ((float) sentences / words) * 100;

    do
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        height = get_int("Height: ");
        printf("Grade 16+\n");
    }
    while (height < 1 || height > 8);
    else
    {
        printf("Grade %i\n", index);
    }
}

int count_letters(string text)
{
    int count = 0;

    for (int i = 1; i <= height; i++)
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        for (int j = 0; j < height - i; j++)
        if (isalpha(text[i]))
        {
            printf(" ");
            count++;
        }
    }

    return count;
}

        for (int k = 0; k < i; k++)
int count_words(string text)
{
    int count = 1;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == ' ')
        {
            printf("#");
            count++;
        }
    }

    return count;
}

        printf("\n");
int count_sentences(string text)
{
    int count = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
    }

    return count;
}