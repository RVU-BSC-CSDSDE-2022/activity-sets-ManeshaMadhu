#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int main(){
  int n;
  n = input_number();
  int result;
  result = is_composite(n);
  output(n,result);
}

int input_number(){
  int a;
  printf("Enter  a number\n");
  scanf("%d", &a);
  return(a);
}

int is_composite(int n){
  int i,c = 0;
  for(i = 1;i<=n;i++){
    if(n%i == 0){c++;}
  }
  return(c);
}

void output(int n, int result){
  if(result > 2){
    printf("%d is a composite number.\n",n);
  }
  else{
    printf("%d is not a composite number.\n",n);
  }
}