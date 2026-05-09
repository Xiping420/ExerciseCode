/*** #include <stdio.h>
int main(void)
{
    printf("to C or not to C, that's a question.\n");
    return 0;
} 
***/

// %d is to present int variable;
// %f is to present float variable;

/* #include <stdio.h>

int main(void)
{
float profit;
profit = 2140.4928;
printf ("Profit: $%f\n", profit);
printf ("Profit: $%.2f\n", profit);
printf ("Profit: $%.4f\n",profit);
return 0;
} */

// P15 exercise: dweight.c

/*#include <stdio.h>

int main(void)
{
int height, length, width, volumn, weight;

height = 12;
length = 10;
width = 8;
volumn = height*length*width;
weight = (volumn+165) / 166;

printf("Dimentions: %dx%dx%d\n", height, length, width);
printf("Volumn: %d\n", volumn);
printf("Dimensional weight: %d\n", weight);
return 0;
} */

// a prograssed form with float category

/*#include <stdio.h>

int main(void)
{
float height, length, width, volumn, weight;

height = 12;
length = 10;
width = 8;
volumn = height * length * width;
weight = volumn / 166;

printf("Dimentions: %fx%fx%f\n", height, length, width);
printf("Volumn: %f\n", volumn);
printf("Dimensional weight: %f\n", weight);
return 0;
}*/

// P17 scanf form of previous code
/*#include <stdio.h>

int main(void)
{
int height, length, width, volume, weight;

printf("Enter height: ");
scanf("%d", &height);
printf("Enter length: ");
scanf("%d", &length);
printf("Enter width: ");
scanf("%d", &width);

printf("Volume: %d\n", height * length * width);
printf("Weight: %d\n", ((height * length * width) + 165)/166);
return 0;
}*/

//remember: the macro-definition is always written as big letter

/*#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %.1f\n", celsius);
    
    return 0;
}*/

// note will be replaced as a blank

// what if int/float is not definated?
/*#include <stdio.h>

int main(void)
{
    int a, b;
    printf("%d%d", a, b);

    return 0;
}
*/



