#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include "helpers.h"
#include <math.h>

#define MAX 9

typedef struct
{
    string name;
    int votes;
} candidate;

candidate candidates[MAX];
int candidate_count;

bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    if (argc < 2)
    for (int row = 0; row < height; row++)
{
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }
        for (int col = 0; col < width; col++)
        {
            int sum = image[row][col].rgbtRed +
                      image[row][col].rgbtGreen +
                      image[row][col].rgbtBlue;

    candidate_count = argc - 1;
            int avg = round(sum / 3.0);

    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }

    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
            image[row][col].rgbtRed = avg;
            image[row][col].rgbtGreen = avg;
            image[row][col].rgbtBlue = avg;
        }
}
}

    int voter_count = get_int("Number of voters: ");

    for (int i = 0; i < voter_count; i++)
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int row = 0; row < height; row++)
{
        string name = get_string("Vote: ");

        if (!vote(name))
        for (int col = 0; col < width; col++)
{
            printf("Invalid vote.\n");
            int oldRed = image[row][col].rgbtRed;
            int oldGreen = image[row][col].rgbtGreen;
            int oldBlue = image[row][col].rgbtBlue;

            int newRed = round(0.393 * oldRed + 0.769 * oldGreen + 0.189 * oldBlue);
            int newGreen = round(0.349 * oldRed + 0.686 * oldGreen + 0.168 * oldBlue);
            int newBlue = round(0.272 * oldRed + 0.534 * oldGreen + 0.131 * oldBlue);

            if (newRed > 255)
            {
                newRed = 255;
            }
            if (newGreen > 255)
            {
                newGreen = 255;
            }
            if (newBlue > 255)
            {
                newBlue = 255;
            }

            image[row][col].rgbtRed = newRed;
            image[row][col].rgbtGreen = newGreen;
            image[row][col].rgbtBlue = newBlue;
}
}

    print_winner();
}

bool vote(string name)
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < candidate_count; i++)
    for (int row = 0; row < height; row++)
{
        if (strcasecmp(candidates[i].name, name) == 0)
        for (int col = 0; col < width / 2; col++)
{
            candidates[i].votes++;
            return true;
            RGBTRIPLE temp = image[row][col];
            image[row][col] = image[row][width - col - 1];
            image[row][width - col - 1] = temp;
}
}
    return false;
}

void print_winner(void)
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    int max_votes = 0;
    RGBTRIPLE temp[height][width];

    for (int i = 0; i < candidate_count; i++)
    for (int row = 0; row < height; row++)
{
        if (candidates[i].votes > max_votes)
        for (int col = 0; col < width; col++)
{
            max_votes = candidates[i].votes;
            temp[row][col] = image[row][col];
}
}

    for (int i = 0; i < candidate_count; i++)
    for (int row = 0; row < height; row++)
{
        if (candidates[i].votes == max_votes)
        for (int col = 0; col < width; col++)
{
            printf("%s\n", candidates[i].name);
            int totalRed = 0;
            int totalGreen = 0;
            int totalBlue = 0;
            int counter = 0;

            for (int i = row - 1; i <= row + 1; i++)
            {
                for (int j = col - 1; j <= col + 1; j++)
                {
                    if (i >= 0 && i < height && j >= 0 && j < width)
                    {
                        totalRed += temp[i][j].rgbtRed;
                        totalGreen += temp[i][j].rgbtGreen;
                        totalBlue += temp[i][j].rgbtBlue;
                        counter++;
                    }
                }
            }

            image[row][col].rgbtRed = round((float) totalRed / counter);
            image[row][col].rgbtGreen = round((float) totalGreen / counter);
            image[row][col].rgbtBlue = round((float) totalBlue / counter);
}
}
}