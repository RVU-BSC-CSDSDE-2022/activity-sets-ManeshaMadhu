#include<stdio.h>
void input(float *base, float *height);
void find_area(float base, float height, float *area);
void output(float base, float height, float area);

int main(){
  float base,height,area;
  input(&base, &height);
  output(base,height,area);
}

void input(float *base, float *height){
  printf("Enter the base of the triangle\n");
  scanf("%f", base);
  printf("Enter the height of the triangle\n");
  scanf("%f", height);
}

void find_area(float base, float height, float *area){
  *area = 0.5*base*height;
}

void output(float base, float height,float area){
  find_area(base,height,&area);
  printf("The area of the traingle with base %f and height %f is %f\n",base,height,area);
}