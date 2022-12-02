#include<stdio.h>
#include <stdlib.h>
#include<math.h>
double input();
double square_root(double n);
void output(double n, double sqrroot);

int main(){
  double n = input();
  double sq = square_root(n);
  output(n,sq);
}

double input(){
  double a;
  printf("Enter a number\n");
  if(scanf("%lf", &a)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  return(a);
}

double square_root(double n){
  double x = n, y = 1.0;
  double precision = 0.000001;
  while((x-y)/x > precision){
    x = (x+y)/2;
    y = n/x;
  }
  return(x);
}

void output(double n, double sqrroot){
  printf("Square root of %.2lf is %.2lf\n",n,sqrroot);
}