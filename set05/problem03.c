#include<stdio.h>
#include<math.h>
void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main(){
  int n,r;
  input_n_and_r(&n,&r);
  int result = nCr(n,r);
  output(n,r,result);
}

void input_n_and_r(int *n, int *r){
  printf("Enter n and r values to calculate combinator\n");
  scanf("%d %d",n,r);
}

//n!/r!*(n-r)!
int nCr(int n, int r){
  int i = 1,n1=1,r1=1,nr=1,c = 0;
  int flag = 0;
  while(flag == 0){
    if(i<=n){
      n1 *= i;
      c++;
    }
    if(i<=r){
      r1 *= i;
      c++;
    }
    if(i<=(n-r)){
      nr *= i;
      c++;
    }
    if(c == 0){flag = 1;}
    c = 0;
    i++;
  }
  int res = n1/(r1*nr);
  return(res);
}

void output(int n, int r, int result){
  printf("for n = %d and r = %d, nCr = %d\n",n,r,result);
}