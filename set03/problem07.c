#include<stdio.h>
#include<stdlib.h>
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
  if(scanf("%f %f", &a.base, &a.altitude)!=2){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  return(a);
}

void find_area(Triangle *t){
  t->area = 0.5*t->base*t->altitude;
}

void output(Triangle t){
  printf("The area of triangle with base = %f and altitude = %f is %f\n",t.base,t.altitude,t.area);
}