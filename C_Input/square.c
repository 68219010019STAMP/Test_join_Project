#include <stdio.h>
int main(){
    //หาพื้นที่
    //หาพื้นที่ของสี่เหลี่ยมผืนผ้า
    int width, heigh, area;
    printf("Enter width: ");
    scanf("%d", &width);
    printf("Enter heigh: ");
    scanf("%d", &heigh);
    area = width * heigh;
    printf("The area of the rectangle is: %d\n", area);
    return 0;
}