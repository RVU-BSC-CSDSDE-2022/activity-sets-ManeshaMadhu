#include<stdio.h>
#include<stdlib.h>
int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main(){
  int n;
  n = input_n();
  int a[n];
  input(n,a);
  int average = odd_average(n,a);
  output(average);
}

int input_n(){
  int num;
  printf("Enter a number\n");
  if(scanf("%d", &num)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  return(num);
}

void input(int n, int a[n]){
  int i;
  printf("Enter the elements of the Array\n");
  for(i = 0;i<n;i++){
    if(scanf("%d", &a[i])!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  }
}

float odd_average(int n, int a[n]){
  int i,c = 0,sum = 0;
  float av;
  for(i = 0;i<n;i++){
    if(a[i]%2==1){
      c++;
      sum = sum+a[i];
    }
  }
  av = sum/c;
  return(av);
}

void output(float avg){
  printf("Average of all the odd elements is:%.2lf", avg);
}