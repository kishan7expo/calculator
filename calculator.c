#include<stdio.h>
int main(){
int num1,num2,sum;
double num1,num2,sum,difference,product;

printf("enter two numbers:");
scanf("%d%d,&num1,&num2);

sum=num1+num2;
printf("the sum is:%d\n",sum);

difference=num1-num2;
printf("the difference is:%d\n",difference);

product=num1*num2;
printf("the product is:%d\n",product);

return 0;
}
