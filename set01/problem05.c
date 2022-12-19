#include <stdio.h>
#include <stdlib.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main(){
  int a,b,c,l;
  a = input();
  b = input();
  c = input();
  l = compare(a,b,c);
  output(a,b,c,l);
}

int input(){
  int x;
  printf("Enter a number\n");
  if(scanf("%d", &x)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  return(x);
}

int compare(int a, int b, int c){
  if((a>=b)&&(a>=c)){return(a);}
  else if((b>=a)&&(b>=c)){return(b);}
  else{return(c);}
}

void output(int a, int b, int c, int largest){
  printf("The largest of %d,%d and %d is %d.\n",a,b,c,largest);
}