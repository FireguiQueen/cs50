#include <stdio.h>

int main(void)
{
    float scores[] = {5, 4, 8, 7};
    int scoresLength = sizeof (scores) / sizeof (scores[0]);
    float totalScore; 

    for (int i = 0; scoresLength > i; i++)
    {
        totalScore += scores[i];
    }

    printf("Array length: %i\n", scoresLength);
    printf("Total Score: %f\n", totalScore);
    printf("Avarage: %f\n", totalScore / scoresLength);
}
