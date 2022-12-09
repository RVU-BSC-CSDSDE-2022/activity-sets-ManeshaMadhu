#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main(){
  int n = input_array_size();
  int a[n];
  input_array(n,a);
  int sum = sum_composite_numbers(n,a);
  output(sum);
}

int input_array_size(){
  int a;
  printf("Enter a the size of the array\n");
  scanf("%d", &a);
  return(a);
}

void input_array(int n, int a[n]){
  printf("Enter the numbers of the array\n");
  int i;
  for(i = 0;i<n;i++){
    scanf("%d", &a[i]);
  }
}

int sum_composite_numbers(int n, int a[n]){
  int i,j,c = 0,sum = 0;
  for(i = 0;i<n;i++){
    for(j = 1;j<=a[i];j++){
      if(a[i]%j == 0){c++;}
    }
    if(c>2){sum += a[i];}
    c = 0;
  }
  return(sum);
}

void output(int sum){
  printf("Sum of the composite numbers are = %d\n",sum);
}