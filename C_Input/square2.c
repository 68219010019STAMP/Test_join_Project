#include <stdio.h>
float main(){
    float width, heigh, area;
    printf("Enter width: ");
    scanf("%f", &width);
    printf("Enter heigh: ");
    scanf("%f", &heigh);
    area = width * heigh;
    printf("The area is: %.2f\n", area);
    return 0;
}