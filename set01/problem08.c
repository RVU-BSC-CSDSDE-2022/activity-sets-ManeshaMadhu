#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

int main(){
  int n,sum;
  n = input_array_size();
  int a[n];
  input_array(n,a);
  sum =sum_n_array(n,a);
  output(n,a,sum);
}

int input_array_size(){
  int x;
  printf("Enter a size\n");
  scanf("%d", &x);
  return(x);
}
void input_array(int n, int a[n]){
  int i;
  for(i = 0;i<n;i++){
    printf("Enter a number\n");
    scanf("%d", &a[i]);
  }
}

int sum_n_array(int n, int a[n]){
  int i,sum = 0;
  for(i = 0;i<n;i++){
    sum = sum+a[i];
  }
  return(sum);
}

void output(int n, int a[n],int sum){
  printf("%d",a[0]);
  int i;
  for(i = 1;i<n;i++){
    printf("+%d", a[i]);
  }
  printf(" is %d",sum);
}