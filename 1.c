#include <stdio.h>
int main ()
{
// ---- Задание №1 ----
int a=2;
printf("1. %d\n",a%a+a*a-a/a);
a=3;
int b=9;
printf(" %d\n",(a*b*(a+(b*a/a))));
// ---- Задание №2 ----
double a1=10;
double b1=90;
double c=30;
double d=12;
double e=8;
double f=5;
double h=2;
double res = a1/(b1*c/(d*e/(f*h)));
printf("2. a1/(b1*c/(d*e/(f*h))) %.12f\n",res);
// ---- Задание №3 ----
int n = 326;
int m = 24;
printf("3. %d\n",n/m%10);
// ---- Задание №4 -----
int k = 4800;
printf("4. %02d:%02d\n",k/(60*60),(k/60-60*(k/(60*60))));
// ---- Задание №5 ----
a=26;
b=42;
a+=b;
b=a-b;
a=a-b;
printf("5. a, b = %d, %d\n",a,b);
// ---- Задание №6 -----
k = 3663;
printf("6. %02d:%02d:%02d\n",k/(60*60),(k/60-60*(k/(60*60))),k-60*(k/60-60*(k/(60*60)))-60*60*(k/(60*60)));
// ---- Задание №7 ----
int counter=1;
int number=101;
int decimal=0;
int timeless=0;
while (number!=0)
 {
     timeless = number % 10*counter;
     decimal = decimal + timeless;
     number = number/10;
     counter*=2;
 }
printf("Число в десятичной системе счисления : %d.\n", decimal);
// ---- Задание №8 ----
number=813;
printf("8. %d.\n", number>>10);
// ---- Задание №9 ----
number=67;
number=number<<2;
number=number>>2;
printf("9. Сначала число сдвигается на 2 бита влево, заполняя справа нулями, а затем на 2 бита вправо, заполняя слева нулями %d.\n", number);
return 0;
}
