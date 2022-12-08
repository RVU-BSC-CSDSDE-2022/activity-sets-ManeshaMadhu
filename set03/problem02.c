#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main(){
  int a,b,c;
  printf("Enter the first sides of the triangle\n");
  a = input_side();
  printf("Enter the second sides of the triangle\n");
  b = input_side();
  printf("Enter the third sides of the triangle\n");
  c = input_side();
  int isscalene = check_scalene(a,b,c);
  output(a,b,c,isscalene);
}

int input_side(){
  int a;
  scanf("%d", &a);
  return(a);
}

int check_scalene(int a, int b, int c){
  if((a!=b)&&(b!=c)&&(a!=c)){return(1);}
  else{return(0);}
}

void output(int a, int b, int c, int isscalene){
  if(isscalene == 1){
    printf("The triangle with sides %d, %d and %d is  scalene\n",a,b,c);
  }
  else{
    printf("The triangle with sides %d, %d and %d is not scalene\n",a,b,c);
  }
}