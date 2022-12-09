#include<stdio.h>
typedef struct triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main(){
  Triangle t;
  t = input_triangle();
  find_area(&t);
  output(t);
}

Triangle input_triangle(){
  Triangle a;
  printf("Enter the base and altitude of the triangle\n");
  scanf("%f %f", &a.base, &a.altitude);
  return(a);
}

void find_area(Triangle *t){
  t->area = 0.5*t->base*t->altitude;
}

void output(Triangle t){
  printf("The area of triangle wwith base = %f and altitude = %f is %f\n",t.base,t.altitude,t.area);
}