//body mass index

#include<stdio.h>

 int main ()
{
    float height;
    float weight;
  

    printf("Enter height(in m): ");
    scanf("%f", &height);

    printf("Enter weight(in kg): ");
    scanf("%f", &weight);

    float bmi = weight/(height*height);

    printf("The BMI with height %.2f and weight %.2f is %.2f", height , weight, bmi);

    if (bmi < 18.5)
    {
       printf("Underweight\n");
    }
    
    else if (bmi<=18.5 && bmi<=25)
    {
       printf("Normal Weight\n");
    }
    
    else if (bmi<25 && bmi<=30)
    {
        printf("Over Weight\n");
    }
    
    else
    
    {
        printf("Obese");
    }
        
    return 0;

}
