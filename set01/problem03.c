#include <stdio.h>
#include <stdlib.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);

int main(void){
  int a,b,sum;
  a = input();
  b = input();
  sum = add(a,b);
  output(a,b,sum);
  return 0;
}

int input(){
  int x;
  printf("Enter a number\n");
  if(scanf("%d", &x)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  return(x);
}

int add(int a, int b){
  int sum;
  sum = a+b;
  return(sum);
}

void output(int a, int b, int sum){
  printf("The sum of %d and %d is %d\n",a,b,sum);
}