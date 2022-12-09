#include<stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);

int main(){
  int n = input();
  int fibo = find_fibo(n);
  output(n,fibo);
}

int input(){
  int a;
  printf("Enter a number\n");
  scanf("%d", &a);
  return(a);
}

int find_fibo(int n){
  int i,a = 0, b = 1, c = 0;
  for(i = 1;i<n;i++){
    c = a+b;
    a = b;
    b = c;
  }
  return(c);
}

void output(int n, int fibo){
  printf("fibo(%d) = %d\n",n,fibo);
}