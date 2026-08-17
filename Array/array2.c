#include <stdio.h>
void main()
{
    int score[4] = { 50,65,80,90 };
    for(int i = 0; i < 4; i++)
    {
        printf("score[%d] = %d\n", i, score[i]);
    }
}