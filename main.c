#include <stdio.h>
int main(void)
{
    int score;
    scanf("%d", &score);
    if (score >= 10)
        printf("Your pass ");
    else
        printf("Your fail ");
    printf("Have a good day");
    return (0);
}