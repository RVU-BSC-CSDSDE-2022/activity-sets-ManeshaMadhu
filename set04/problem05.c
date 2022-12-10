#include<stdio.h>
#include<stdlib.h>
int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main()
{
  int n;
  n =input_array_size();
  n =n-1;
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  output(n,a);
}

int input_array_size(){
  int a;
  printf("Enter a number\n");
  if(scanf("%d", &a)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  return(a);
}

void init_array(int n, int a[n]){
  int i;
  for(i = 0;i<n;i++){
    a[i] = i+2;
  }
}

void erotosthenes_sieve(int n, int a[n]){
  int i,j;
  for(i = 0;i<n;i++){
    if(a[i] != 0){
      for(j = i+1;j<n;j++){
        if(a[j]%a[i] == 0){
          a[j] = 0;
        }
      }
    }
  }
}

void output(int n, int a[n]){
  int i;
  printf("%d", a[0]);
  for(i = 1;i<n;i++){
    if(a[i] != 0){
      printf(", %d", a[i]);
    }
  }
  printf("\n");
}