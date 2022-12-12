#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int input();
float borga_X(int x);
void output(int x, float result);

int main(){
  int x = input();
  float result = borga_X(x);
  output(x,result);
}

int input(){
  int a;
  printf("Enter a number\n");
  if(scanf("%d", &a)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  return(a);
}

//1 + (x^1)/3! + (x^2)/5! + (x^3)/7! + ...
float borga_X(int x){
  float sum = 0.0,fact = 1.0,c = 1.0;
  int i;
  int a = x;
  for(i = 2;c>0.000001;x *= a,i += 2){
    sum = sum+c;
    fact *= i*(i+1);
    c = x/fact;
  }
  return(sum);
}

void output(int x, float result){
  printf("borga(%d) = %2.6lf\n",x,result);
}