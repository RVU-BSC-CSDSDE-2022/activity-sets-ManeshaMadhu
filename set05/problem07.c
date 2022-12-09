#include<stdio.h>
typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction sum);

int main(){
  Fraction f1,f2,sum;
  printf("Enter the first fraction\n");
  f1 = input_fraction();
  printf("Enter the second fraction\n");
  f2 = input_fraction();
  sum = add_fractions(f1,f2);
  output(f1,f2,sum);
}

Fraction input_fraction(){
  Fraction a;
  scanf("%d %d", &a.num, &a.den);
  return(a);
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

void output(Fraction f1, Fraction f2, Fraction sum){
  printf("%d/%d + %d/%d = %d/%d\n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}