#include <stdio.h>
int main(){
    float height, weight, bmi;
    int choice;
    printf("welcome to the bmi calculator\n");
    printf("1. calculate bmi\n");
    printf("2. Exit\n");
    printf("Enter your choice(1/2):");
    scanf("%d", &choice);
    switch (choice){
        case 1:
        printf("Enter your height in meters: ");
        scanf("%f",&height);
        printf("Enter your weight in kilograms: ");
        scanf("%f",&weight);
        bmi=weight/(height*height);
        printf("your bmi is: %.2f kg/m2\n", bmi);
        if (bmi<18.5){
            printf("your are underweight.\n");
        }
        else if(bmi>=18.5 && bmi < 24.9){
            printf("normal weight.\n");
        }
        else if(bmi>=24.9 && bmi < 29.9){
            printf("you are overweight.\n");
        }
        else{
            printf("your are obese.\n");
        }
        break;
        case 2:
        printf("Exiting the bmi calculator.\n");
        break;
        default:
        printf("Invalid choice. please choose 1 or 2.\n");
        break;
    }
        return 0;
}
