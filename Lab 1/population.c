#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int startingPopulation;
    starting:
    scanf("%d", &startingPopulation);
    if (startingPopulation < 9)
    {
        goto starting;
    }

    // TODO: Prompt for end size
    int endingPopulation;
    ending:
    scanf("%d", &endingPopulation);
    if (endingPopulation < startingPopulation)
    {
        goto ending;
    }

    // TODO: Calculate number of years until we reach threshold
    int year = 0;
    while (startingPopulation < endingPopulation)
    {
        startingPopulation += (startingPopulation / 3) - (startingPopulation / 4);
        year++;
    }

    // TODO: Print number of years
    printf("%d", year);
}
