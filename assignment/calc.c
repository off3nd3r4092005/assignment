#include <stdio.h>

int main() {
    char gender;
    float temperature, height, weight;
    int tasteLevel;

    printf("Enter gender (M/F):");
    scanf("%c", &gender);

    printf("Enter temperature:");
    scanf("%f", &temperature);

    printf("Enter height (in feet):");
    scanf("%f", &height);

    printf("Enter weight (in kg):");
    scanf("%f", &weight);

    printf("Enter taste level (1 for not good, 2 for normal, 3 for okay):");
    scanf("%d", &tasteLevel);

    switch (gender) {
        case 'M':
        case 'm':
          if (temperature > 35.5 && height > 5.0 && height < 6.0 && (tasteLevel == 1 || tasteLevel == 2) && weight > 80) {
            printf("Diagnosis: COVID-19\n");
          }
          else if (temperature < 34.5 && temperature > 30.0 && height >= 4.0 && height <= 5.0 && weight >= 60 && weight <= 80){
            printf("Diagnosis: Malaria\n");
          }
          else if (temperature < 30.0 && weight >= 60 && weight <= 80 && height >= 4.5 && height <= 5.5 && tasteLevel == 3) {
            printf("Diagnosis: Free from Malaria\n");
          }
          else {
            printf("Diagnosis: Healthy\n");
          }
          break;

          case 'F':
          case 'f':
                    if (temperature > 35.5 && height > 5.0 && height < 6.0 && (tasteLevel == 1 || tasteLevel == 2) && weight > 80) {
            printf("Diagnosis: COVID-19\n");
          }
          else if (temperature < 34.5 && temperature > 30.0 && height >= 4.0 && height <= 5.0 && weight >= 60 && weight <= 80){
            printf("Diagnosis: Malaria\n");
          }
          else if (temperature < 30.0 && weight >= 60 && weight <= 80 && height >= 4.5 && height <= 5.5 && tasteLevel == 3) {
            printf("Diagnosis: Free from Malaria\n");
          }
          else {
            printf("Diagnosis: Healthy\n");     //similar conditons for female patients
          }
          break;
            default:
            printf("Invalid gender\n");

    }

    return 0;
}