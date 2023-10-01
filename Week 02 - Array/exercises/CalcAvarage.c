#include <stdio.h>

int main(void)
{   
    float totalScore = 0;
    int totalNumbers = 0;
    printf("How many numbers will you use? \n");
    scanf("%i", &totalNumbers);

    for (int i = 0; i < totalNumbers; i++)
    {
        float number = 0;
        printf("Number %i: ", i + 1);
        scanf("%f", &number);
        totalScore += number;
    }

    printf("Total: %f \n", totalScore);
    printf("Length: %i \n", totalNumbers);
    printf("Avarage: %f \n", totalScore / totalNumbers);

}