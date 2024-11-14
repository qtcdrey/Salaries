#include <stdio.h>

int main() {
    float hour_rate, gross_pay, holding_tax, net_pay;
    int hour_work;
    printf("Hourly rate: ");
    scanf("%f", &hour_rate);
    printf("Hours worked: ");
    scanf("%d", &hour_work); 
    gross_pay = hour_rate*hour_work;
    holding_tax = gross_pay*.32;
    net_pay = gross_pay-holding_tax;
    printf("\nGross pay: %.2f", gross_pay);
    printf("\nWithholding tax: %.2f", holding_tax);
    printf("\nNet pat: %.2f", net_pay);
    return 0;
}