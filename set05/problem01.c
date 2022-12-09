#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main(){
  int num1,num2,den1,den2,res_num,res_den;
  input(&num1,&num2,&den1,&den2);
  add(num1,num2,den1,den2,&res_num,&res_den);
  output(num1,num2,den1,den2,res_num,res_den);
}

void input(int *num1, int *den1, int *num2, int *den2){
  printf("Enter the first fration\n");
  scanf("%d %d",num1,den1);
  printf("Enter the second fration\n");
  scanf("%d %d",num2,den2);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den){
  int a,gcd = 0;
  int b = den1*den2;
  *res_den = b;
  num1 = num1*den2;
  num2 = num2*den1;
  a = num1+num2;
  *res_num = a;
  while(gcd == 0){
    if(a == b){
      gcd = a;
    }
    else {
      if(a>b){
        a = a-b;
      }
      else{
        b = b-a;
    }
      }
  }
  *res_num /= gcd;
  *res_den /= gcd;
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den){
  printf("%d/%d + %d/%d = %d/%d\n",num1,den1,num2,den2,res_num,res_den);
}