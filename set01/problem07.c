#include <stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main(){
  int n,sum;
  n = input_n();
  sum = sum_n_nos(n);
  output(n,sum);
}

int input_n(){
  int x;
  printf("Enter a number\n");
  scanf("%d", &x);
  return(x);
}

int sum_n_nos(int n){
  int i,sum = 0;
  for(int i=1;i<=n;i++){
    sum = sum+i;
  }
  return(sum);
}

void output(int n, int sum){
  printf("%d",1);
  int i;
  for(i = 2;i<=n;i++){
    printf("+%d", i);
  }
  printf(" is %d",sum);
}