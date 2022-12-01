#include<stdio.h>
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
  printf("Enter a number");
  scanf("%lf", &a);
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
  printf("Square root of %.2lf is %.2lf",n,sqrroot);
}