#include <stdio.h>

float calculatemarks(int correct, int incorrect)
{
    return (correct * 1.0f) - (incorrect * 0.25f);
}
float calculatepercentage(float obtained, int totalquestions)
{
    float totalmarks = totalquestions * 1.0f;
    return (obtained / totalmarks) * 100;
}

int main()
{
    int totalquestions;
    int answers[2];
    float obtainedmarks, percentage;
    while (1)
    {
        printf("Enter total number of questions: ");
        scanf("%d", &totalquestions);
        printf("Enter number of correct answers: ");
        scanf("%d", &answers[0]);
        printf("Enter number of incorrect answers: ");
        scanf("%d", &answers[1]);
        while (answers[0] + answers[1] > totalquestions)
        {
            printf("\nHala vodai total theke beshi answer input disos \n");
            printf("Re-enter correct answers: ");
            scanf("%d", &answers[0]);
            printf("Re-enter incorrect answers: ");
            scanf("%d", &answers[1]);
        }

        obtainedmarks = calculatemarks(answers[0], answers[1]);
        percentage = calculatepercentage(obtainedmarks, totalquestions);
        printf("\n--- Result ---\n");
        printf("Marks Obtained : %.2f out of %d\n", obtainedmarks, totalquestions);
        printf("Percentage     : %.2f%%\n", percentage);

        if (percentage < 30)
        {
            printf("Ki bal poros bhai\n");
        }
        else if (percentage < 50)
        {
            printf("Ei pora te hobena fens\n");
        }
        else if (percentage >= 70 && percentage <= 80)
        {
            printf("Ektur jonno A+ miss\n");
        }
        else if (percentage > 80)
        {
            printf("Bare sahab ne awkad dikha di\n");
        }

        printf("\n-------------------------------\n\n");
    }

    return 0;
}
