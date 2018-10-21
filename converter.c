//programmed by Ryan Burrus to convert a decimal to both bianary and hexadecimal
#include <stdio.h>
 
int main()
{
  int n, c, k, remainder, quotient, j = 0;
  char hexadecimal[100];
 
  printf("Enter an integer in decimal number system\n");
  scanf("%d", &n);
 
  printf("%d in binary number system is:\n", n);
 //code to convert decimal to bianary
  for (c = 31; c >= 0; c--)
  {
    k = n >> c;
 
    if (k & 1)
      printf("1");
    else
      printf("0");
  }
 
  printf("\n");
 //code to convert decimal to hexadecimal
 scanf("%ld", &n);
 printf("%ld \n",n);
 
 quotient = n;
 
 while (quotient != 0)
 {
 remainder = quotient % 16;          //step 1
 if (remainder < 10)
 hexadecimal[j++] = 48 + remainder;   //step 2
 else
 hexadecimal[j++] = 55 + remainder;   //step 3
 quotient = quotient / 16;            //step 4
 }
 
 printf("Equivalent hexadecimal value of decimal number %ld:",decimal);
 
 //step 6
 for (i = j; i >= 0; i--)
 printf("%c", hexadecimal[i]);
 return 0;
}

