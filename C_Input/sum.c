#include <stdio.h>
int main(){
    int num1, num2, sum;
    printf("Enter Number 1: ");
    scanf("%d", &num1);  //85
    printf("Enter Number 2: ");
    scanf("%d", &num2); //12
    sum = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, sum);
    return 0;
}