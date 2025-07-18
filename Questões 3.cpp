#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1,num2,soma,sub,multi,divi,res;

   printf("informe o primeiro numero inteiro: ");
   scanf("%d,&num1");
   printf("informe o segundo numero inteiro: ");
   scanf("%d,&num2");

   soma = num1 + num2;
   sub = num1 - num2;
   multi = num1 * num2;
   divi = num1 / num2;
   res = num1 % num2;
   printf("numero 1 \t numero 2 \t operacao \n");
   printf("%d\t%d\t\t numero1 + numero2 = %d\n",num1,num2,soma);
   printf("%d\t%d\t\t numero1 - numero2 = %d\n",num1,num2,sub);
   printf("%d\t%d\t\t numero1 * numero2 = %d\n",num1,num2,multi);
   printf("%d\t%d\t\t numero1 / numero2 = %d\n",num1,num2,divi);
  printf("%d\t%d\t\t numero1 % numero2 = %d\n",num1,num2,res);

  return 0;

}
