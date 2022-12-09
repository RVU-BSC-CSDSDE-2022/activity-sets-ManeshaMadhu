#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main(){
  int a,b;
  printf("Enter the first number\n");
  a = input();
  printf("Enter the second number\n");
  b = input();
  int gcd = find_gcd(a,b);
  output(a,b,gcd);
}

int input(){
  int a;
  scanf("%d", &a);
  return(a);
}

int find_gcd(int a, int b){
  if(a == b){return(a);}
  else if(a>b){find_gcd((a-b),b);}
  else{find_gcd(a,(b-a));}
}

void output(int a, int b, int gcd){
  printf("the gcd for %d and %d is %d",a,b,gcd);
}