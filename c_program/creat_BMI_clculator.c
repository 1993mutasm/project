#include <stdio.h>

int main() {
    double height, weight;
    printf("Enter your height in meters: ");
    scanf("%lf",&height);
     printf("Enter your weight in kilograms: ");
     scanf("%lf",&weight);
     double bmi=weight/(height*height);
     if(bmi<18)
     {
         printf("underweight");
     }
     else if(bmi>=18&& bmi == 25){
         printf("normal weight");
     }
     else if(bmi>=26&& bmi == 29){
         printf("overweight");
     }
     else if(bmi >= 30&& bmi ==34){
         printf("class I obesity");
     }
     else if(bmi >= 35&& bmi == 39){
         printf("class II obesity");
     } 
     else{
         printf("class III obesity");
     }

    return 0;
}
