#include <stdio.h>
int input ();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c,int largest);

int main(void)
{
  int a,b,c,l;
  a=input ();
  b=input ();
  c=input ();
  compare(a,b,c, &l);
  output(a,b,c,l);
}

int input(){
  int x;
  printf("Enter the number\n");
  scanf("%d", &x);
  return(x);
}

void compare(int a, int b, int c, int *largest){
  if((a>b)&&(a>c)){*largest = a;}
  else if((b>a)&&(b>c)){*largest = b;}
  else{*largest = c;}
}

void output(int a, int b, int c, int largest){
  printf("The largest of %d, %d and %d is %d.",a,b,c,largest);
}