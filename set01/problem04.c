#include <stdio.h>
#include <stdlib.h>
int input();
void add(int a, int b,int *sum);
void output(int a, int b, int sum);

int main(void){
  int a,b,sum;
  a = input();
  b = input();
  add(a,b, &sum);
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

void add(int a, int b,int *sum){
  *sum = a+b;
}

void output(int a, int b, int sum){
  printf("The sum of %d and %d is %d\n",a,b,sum);
}