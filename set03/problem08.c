#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main(){
  int n = input_n();
  Triangle t[n];
  input_n_triangles(n,t);
  find_n_areas(n,t);
  Triangle smallest = find_smallest_triangle(n,t);
  output(n,t,smallest);
}

int input_n(){
  int n;
  printf("Enter the size of the array\n");
  scanf("%d", &n);
  return(n);
}

Triangle input_triangle(){
  Triangle a;
  printf("Enter the base and altitude of the triangle\n");
  scanf("%f %f",&a.base,&a.altitude);
  return(a);
}

void input_n_triangles(int n, Triangle t[n]){
  int i;
  for(i = 0;i<n;i++){
    t[i] = input_triangle();
  }
}

void find_area(Triangle *t){
  t->area = 0.5 * (t->base) * (t->altitude);
  printf("%f\n", t->area);
}

void find_n_areas(int n, Triangle t[n]){
  int i;
  for(i = 0;i<n;i++){
    find_area(&t[i]);
  }
}

Triangle find_smallest_triangle(int n, Triangle t[n]){
  int i;
  Triangle c={0.0,0.0, 0.0};
  float a,a1;
  for(i = 0;i<n-1;i++){
    a = t[i].area;
    a1 = t[i+1].area;
    if(a < a1){
      c.base = t[i].base;
      c.altitude = t[i].altitude;
      c.area = t[i].area;
    }
  }
  return(c);
}

void output(int n, Triangle t[n], Triangle smallest){
  int i;
  printf("The smallest triangle out of triangles with base and height (%2.f,%2.f)",t[0].base,t[0].altitude);
  for(i = 1;i<n;i++){
    printf(" , (%2.f,%2.f) ",t[i].base,t[i].altitude);
  }
  printf("is the triangle having base %2.2f, height %2.2f and area %2.2f\n",smallest.base,smallest.altitude,smallest.area);
}