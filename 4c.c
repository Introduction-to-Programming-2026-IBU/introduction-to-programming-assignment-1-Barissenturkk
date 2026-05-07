#include <cs50.h>
#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);

int main(int argc, string argv[])
int main(int argc, char *argv[])
{
    if (argc != 2 || !only_digits(argv[1]))
    if (argc != 2)
{
        printf("Usage: ./caesar key\n");
        printf("Usage: ./recover card.raw\n");
return 1;
}

    int key = atoi(argv[1]);
    string plaintext = get_string("plaintext:  ");
    FILE *input = fopen(argv[1], "rb");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    printf("ciphertext: ");
    uint8_t block[512];
    FILE *img = NULL;
    char name[8];
    int jpgCount = 0;

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    while (fread(block, 1, 512, input) == 512)
{
        char c = plaintext[i];
        bool is_jpg_start = block[0] == 0xff &&
                            block[1] == 0xd8 &&
                            block[2] == 0xff &&
                            (block[3] & 0xf0) == 0xe0;

        if (isupper(c))
        if (is_jpg_start)
{
            printf("%c", (c - 'A' + key) % 26 + 'A');
            if (img != NULL)
            {
                fclose(img);
            }

            sprintf(name, "%03i.jpg", jpgCount);
            img = fopen(name, "wb");
            jpgCount++;
}
        else if (islower(c))
        {
            printf("%c", (c - 'a' + key) % 26 + 'a');
        }
        else

        if (img != NULL)
{
            printf("%c", c);
            fwrite(block, 1, 512, img);
}
}

    printf("\n");
    return 0;
}

bool only_digits(string s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    if (img != NULL)
{
        if (!isdigit(s[i]))
        {
            return false;
        }
        fclose(img);
}
    return true;

    fclose(input);
    return 0;
}