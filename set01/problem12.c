#include<stdio.h>
struct complex {
	int real,img;
};
typedef struct complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main(){
  int n = get_n();
  Complex c[n],result;
  input_n_complex(n,c);
  result = add_n_complex(n,c);
  output(n,c,result);
}

int get_n(){
  int a;
  printf("Enter a number.\n");
  scanf("%d", &a);
  return(a);
}

Complex input_complex(){
  Complex a;
  printf("Enter a and b where a + ib is the first complex number.\n");
   scanf("%d%d", &a.real, &a.img);
  return(a);
}

void input_n_complex(int n, Complex c[n]){
  int i;
  for(i = 0;i<n;i++){
    c[i] = input_complex();
  }
}

Complex add(Complex a, Complex b){
  Complex sum;
  sum.real = a.real+b.real;
  sum.img = a.img+b.img;
  return(sum);
}

Complex add_n_complex(int n, Complex c[n]){
  int i;
  Complex sum = {0,0};
  for(i = 0;i<n;i++){
    sum = add(sum,c[i]);
  }
}

void output(int n, Complex c[n], Complex result){
  int i;
  for(i = 0;i<n-1;i++){
    printf("%d+%di + ",c[i].real,c[i].img);
  }
  printf("%d+%di ",c[n-1].real,c[n-1].img);
  printf("is %d+%di",result.real,result.img);
}