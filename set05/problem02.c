#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int num, den;
} Fraction;

Fraction input();
void smallest_fraction(Fraction a, Fraction b, Fraction c, Fraction *res);
void output(Fraction a, Fraction b, Fraction c, Fraction res);

int main(){
  Fraction a = input();
  Fraction b = input();
  Fraction c = input();
  Fraction res;
  smallest_fraction(a,b,c,&res);
  output(a,b,c,res);
}

Fraction input(){
  Fraction a;
  printf("Enter the fration\n");
  if(scanf("%d %d",&a.num,&a.den)!=2){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  return(a);
}

void smallest_fraction(Fraction a, Fraction b, Fraction c, Fraction *res){
  if((a.num/a.den > b.num/b.den)&&(a.num/a.den > c.num/c.den)){
    res->num = a.num;
    res->den = a.den;
  }
  else if((b.num/b.den > a.num/a.den)&&(b.num/b.den > c.num/c.den)){
    res->num = b.num;
    res->den = b.den;
  }
  else{
    res->num = c.num;
    res->den = c.den;
  }
}

void output(Fraction a, Fraction b, Fraction c, Fraction res){
  printf("The smallest of %d/%d, %d/%d and %d/%d is %d/%d\n",a.num,a.den,b.num,b.den,c.num,c.den,res.num,res.den);
}