#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);

int main(){
  int n = input_degree();
  n += 1;
  float a[n];
  input_coefficients(n,a);
  float x = input_x();
  float result = evaluate_polynomial(n,a,x);
  output(n,a,x,result);
}

int input_degree(){
  int z;
  printf("Enter the degree\n");
  if(scanf("%d", &z)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  return(z);
}

void input_coefficients(int n, float a[n]){
  for(int i = 0;i<n;i++){
    printf("Enter the %d coefficients\n",i+1);
    if(scanf("%f", &a[i])!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  }
}

float input_x(){
  float z;
  printf("Enter the value of x\n");
  if(scanf("%f", &z)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  return(z);
}

float evaluate_polynomial(int n, float a[n], float x){
  float sum = 0.0;
  int p = n-1;
  for(int i =0;i<n;i++,p--){
    sum = sum + (a[i]*pow(x,p));
  }
  return(sum);
}

void output(int n, float a[n], float x, float result){
  printf("The polynomial value of H(%.2f",a[0]);
  for(int i = 1;i<n;i++){
    printf(",%.2f",a[i]);
  }
  printf(") when x is %.2f is %.2f",x,result);
}