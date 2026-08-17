#include <stdio.h>
void main()
{
    int i,number[5],max,min;
    printf("Input 5 numbers: ");
    scanf("%d %d %d %d %d",&number[0],&number[1],&number[2],&number[3],&number[4]);
    max = number[0];
    min = number[0];
    for(i=1;i<5;i++)
    {
        if(number[i] > max)
            max = number[i];
        if(number[i] < min)
            min = number[i];
    }
    printf("Max = %d\n",max);
    printf("Min = %d\n",min);
}
