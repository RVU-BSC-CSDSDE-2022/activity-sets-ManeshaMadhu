#include<stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);

int main(){
  int n = input_number();
  int result = is_prime(n);
  output(n,result);
}

int input_number(){
  int a;
  printf("Enter a number\n");
  scanf("%d", &a);
  return(a);
}

int is_prime(int n){
  int c = 0,i;
  for(i = 1;i<=n;i++){
    if(n%i == 0){c++;}
  }
  return(c);
}

void output(int n, int result){
  if(result == 2){printf("%d is a prime number\n",n);}
  else{printf("%d is not a prime number\n",n);}
}