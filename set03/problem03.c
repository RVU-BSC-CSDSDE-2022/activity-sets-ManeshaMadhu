#include<stdio.h>
#include<stdlib.h>
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
  if(scanf("%d", &a)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  return(a);
}

int is_composite(int n){
  int i,c = 0;
  for(i = 1;i<=n;i++){
    if(n%i == 0){
      c++;
      if(c == 3);
      break;
    }
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