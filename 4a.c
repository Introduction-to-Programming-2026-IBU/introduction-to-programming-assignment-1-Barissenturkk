#include <cs50.h>
#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

bool valid_key(string key);

int main(int argc, string argv[])
int main(int argc, char *argv[])
{
    if (argc != 2 || !valid_key(argv[1]))
    if (argc != 4)
{
        printf("Usage: ./substitution key\n");
        printf("Usage: ./volume input output factor\n");
return 1;
}

    string key = argv[1];
    string plaintext = get_string("plaintext:  ");

    printf("ciphertext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    FILE *infile = fopen(argv[1], "rb");
    if (infile == NULL)
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
        printf("Could not open input file.\n");
        return 1;
}

    printf("\n");
    return 0;
}

bool valid_key(string key)
{
    if (strlen(key) != 26)
    FILE *outfile = fopen(argv[2], "wb");
    if (outfile == NULL)
{
        return false;
        fclose(infile);
        printf("Could not create output file.\n");
        return 1;
}

    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i]))
        {
            return false;
        }
    float factor = atof(argv[3]);

    uint8_t header[44];
    fread(header, 1, 44, infile);
    fwrite(header, 1, 44, outfile);

        for (int j = i + 1; j < 26; j++)
        {
            if (tolower(key[i]) == tolower(key[j]))
            {
                return false;
            }
        }
    int16_t sample;

    while (fread(&sample, sizeof(int16_t), 1, infile) == 1)
    {
        sample = sample * factor;
        fwrite(&sample, sizeof(int16_t), 1, outfile);
}

    return true;
    fclose(infile);
    fclose(outfile);
    return 0;
}