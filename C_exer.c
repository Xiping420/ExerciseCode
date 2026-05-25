#include <stdio.h>
int main(void)
{
    printf("to C or not to C, that's a question.\n");
    return 0;
} 

// %d is to present int variable;
// %f is to present float variable;

#include <stdio.h>

int main(void)
{
float profit;
profit = 2140.4928;
printf ("Profit: $%f\n", profit);
printf ("Profit: $%.2f\n", profit);
printf ("Profit: $%.4f\n",profit);
return 0;
}

// P15 exercise: dweight.c

#include <stdio.h>

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
} 

// a prograssed form with float category

#include <stdio.h>

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
}

// P17 scanf form of previous code
#include <stdio.h>

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
}

//remember: the macro-definition is always written as big letter

#include <stdio.h>

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
}

// note will be replaced as a blank

// what if int/float is not definated?
#include <stdio.h>

int main(void)
{
    int a, b;
    printf("%d%d", a, b);

    return 0;
}

//printf a character:

#include <stdio.h>

int main(void)
{
    printf("       *\n");
    printf("      *\n");
    printf("     *\n");
    printf("*   *\n");
    printf(" * *\n");
    printf("  *\n");

    return 0;
}

//write a programme to calculate the volume of a sphere
#include<stdio.h>

int main(void)
{
    int radius;
    float pi = 3.142592f;
    float volume = 4.0f/3.0f*pi*radius*radius*radius;

    printf("The Radius of the Sphere is: ");
    scanf("%d", &radius);

    printf("The Volume of the Sphere is %f", volume);

    return 0;
}

//the formula of the prinf() function: 
//printf(xxx, variable?, variable?);

// %m.pX/-m.pX form is definated in printf().
// percision in different data category:
//d--10int, e--float in exponential form, .6X.
//f--normal float, .6X, g--both e & f, without .000.
//i--Octal(0NNN) & Hexadecimal(0xNNN) & normal int.

//\a: alart. \b back. 
//\n, \t tabular. \"="

//be careful to use scanf() function.

//+, -, *, /, %.
//when combine int and float in calculating, the result is float.
//pay attention to the implementation-defined behavior.

#include<stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
     first_sum, second_sum, total;
    
    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 9-( ( (first_sum * 3 + second_sum) -1) % 10);

    printf("Check digit: %d\n", total);

    return 0;

}

// i += 2 -- i = i + 2
// -= / *= / /= / %=

i = 1;
printf("i is %d\n", ++i) /*"i is 2"*/
printf("i is %d\n", i) /*"i is 2"*/

i = 1;
printf("i is %d\n", i++) /*"i is 1"*/
printf("i is %d\n", i) /*"i is 2"*/

#include <stdio.h>

int main(void){
    float value;

    printf("Please enter the value of the Trade: ");
    scanf("%f", &value);

    if (value < 2500)
      printf("Commission: %.2f", (value*0.017) + 30);
    else if (value >= 2500 && value < 6250)
      printf("Commission: %.2f", (value*0.0066) + 56);
    else if (value >= 6250 && value < 20000)
      printf("Commission: %.2f", (value*0.0034) + 76);
    else if (value >= 20000 && value < 50000)
      printf("Commission: %.2f", (value*0.0022) + 100);
    else if (value >= 50000 && value < 500000)
      printf("Commission: %.2f", (value*0.0011) + 155);
    else
      printf("Commission: %.2f", (value*0.0009) + 255);
    
    if (((value*0.017) + 30) < 39.00f)
      printf("Commission: 39.00");

    return 0;
}

#include<stdio.h>

int main(void){

  int DAY, MONTH, YEAR;

  printf("Enter date (mm/dd/yy): ");
  scanf("%d/%d/%d", &MONTH, &DAY, &YEAR);

  printf("Dated this %d", DAY);

  switch (DAY)
  {
  case 1: case 11: case 21: case 31: 
    printf("st");
    break;
  case 2: case 12: case 22:
    printf("nd");
    break;
  case 3: case 13: case 23:
    printf("rd");
  default: printf("th");
    break;
  }

  printf(" of ");

  switch (MONTH)
  {
  case 1: printf("January");
    break;
  case 2: printf("February");
    break;
  case 3: printf("March");
    break;
  case 4: printf("April");
    break;
  case 5: printf("May");
    break;
  case 6: printf("June");
    break;
  case 7: printf("July");
    break;
  case 8: printf("August");
    break;
  case 9: printf("September");
    break;
  case 10: printf("October");
    break;
  case 11: printf("November");
    break;
  case 12: printf("December");
    break;
  }

  printf(", %d", YEAR);

  return 0;
}

// while / do / for / break / continue / goto

i = 1
while (i < n)
  i = i * 2
    
// construct infinite recursion

//while (1)...

#include<stdio.h>

int main(void){

  int num, n, square_num;

  printf("This program prints a table of squares.\nEnter number of entries in table: ");
  scanf("%d", &n);

  num = 1;
  while (num <= n)
  {
    printf("%d  %d\n", num, num * num);
    num++;
  }

  return 0;
  
}
