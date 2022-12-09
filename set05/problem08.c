#include<stdio.h>
typedef struct fraction
{
    int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);

int main(){
  int n = input_n();
  Fraction f[n];
  input_n_fractions(n,f);
  Fraction sum = add_n_fractions(n,f);
  output(n,f,sum);
}

int input_n(){
  int a;
  printf("Enter the size of the array\n");
  scanf("%d", &a);
  return(a);
}

Fraction input_fraction(){
  Fraction a;
  scanf("%d %d", &a.num, &a.den);
  return(a);
}

void input_n_fractions(int n, Fraction f[n]){
  int i;
  for(i= 0;i<n;i++){
    printf("Enter the %d fraction",i+1);
    f[i] = input_fraction();
  }
}

int find_gcd(int a, int b){
  if(a == b){return(a);}
  else if(a>b){find_gcd((a-b),b);}
  else{find_gcd(a,(b-a));}
}

Fraction add_fractions(Fraction f1, Fraction f2){
  int b = f1.den*f2.den;
  int num1 = f1.num*f2.den;
  int num2 = f2.num*f1.den;
  int a = num1+num2;
  int gcd = find_gcd(a,b);
  Fraction s;
  s.num = a/gcd;
  s.den = b/gcd;
  return(s);
}

Fraction add_n_fractions(int n, Fraction f[n]){
  int i;
  Fraction sum = {0,0};
  for(i = 0;i<n;i++){
    sum = add_n_fractions(sum,f[i]);
  }
  return(sum);
}

void output(int n, Fraction f[n], Fraction sum){
  printf("%d/%d ",f[0].num,f[0].den);
  int i;
  for(i = 1;i<n;i++){
    printf("+ %d/%d ",f[i].num,f[i].den);
  }
  printf("= %d/%d",sum.num,sum.den);
}