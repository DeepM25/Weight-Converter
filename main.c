#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    int choice = 0;
    float kg = 0.0;
    float pound = 0.0;
    printf("Weight Conversion Calculator\n");
    printf("1. Kgs to Pounds\n");
    printf("2. Pounds to Kgs\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d",&choice);

    if(choice == 1){
        printf("Enter the weight in Kgs: ");
        scanf("%f",&kg);
        pound = kg * 2.20462;
        printf("%.2f kilograms is equal to %.2f",kg,pound);

    }

    else if(choice == 2){
        printf("Enter the weight in pounds: ");
        scanf("%f",&pound);
        kg = pound/2.20462;
        printf("%.2f kilograms is equal to %.2f",pound,kg);

    }
    return 0;
}
