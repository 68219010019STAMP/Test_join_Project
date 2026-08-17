#include <stdio.h>
int main(){
    int money, time, total;
    printf("money: ");
    scanf("%d", &money);  //15
    printf("hour: ");
    scanf("%d", &time); //50
    total = money * time;
    printf("total is %d Baht",total);
    return 0;
}