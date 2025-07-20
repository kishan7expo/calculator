#include<stdio.h>
int main(){
int num1,num2,sum;
double num1,num2,sum,difference,product,division;

printf("enter two numbers:");
scanf("%d%d,&num1,&num2);

sum=num1+num2;
printf("the sum is:%d\n",sum);

difference=num1-num2;
printf("the difference is:%d\n",difference);

product=num1*num2;
printf("the product is:%d\n",product);

division=num1/num2;
printf("the quotient is:%d\n",division);

return 0;
}
