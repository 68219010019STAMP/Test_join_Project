#include <stdio.h>
void main()
{
    int SukiCost = 239;
    double Tax = 0.07;
    int Customers;

    printf("How Many Customers:");
    scanf("%d", &Customers);

    if (Customers <= 4)
    {
        int TotalCost = (Customers - 1) * SukiCost;
        double TotalCostWithTax = TotalCost + (TotalCost * Tax);
        printf("Total Cost: %d\n", TotalCost);
        printf("Total Cost with Tax: %.2f\n", TotalCostWithTax);
    }
    else
    {
        int TotalCost = Customers * SukiCost;
        double TotalCostWithTax = TotalCost + (TotalCost * Tax);
        printf("Total Cost: %d\n", TotalCost);
        printf("Total Cost with Tax: %.2f\n", TotalCostWithTax);
    }

    printf("\nDo you want to continue? (Y/N): ");
    char choice;
    scanf(" %c", &choice);

    if (choice == 'Y' || choice == 'y')
    {
        return main();
    }
    else
    {
        printf("Kob Khun Krub!\n");
    }

}