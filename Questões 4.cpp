#include <stdlib.h>

int main(){
int num1, num2;
    printf("digite o primeiro numero inteiro: ");
    scanf("%d",&num1);
    printf("digiter o segundo numero inteiro: ");
    scanf("%d",&num2);
    if(num2 !=0){
    if(num1 % num2 ==0){
    printf("%d e multiplo de %d. \n",num1,num2);
    } else{
    printf("%d nao e multiplo de %d.\n",num1,num2);
}
{else{
printf("nao e possivel dividir por zero!\n");
}
return 0;
