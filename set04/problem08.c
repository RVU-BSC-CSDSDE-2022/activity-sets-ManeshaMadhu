#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct point {
    float start_end_x, start_end_y;
} Point;

typedef struct side {
    Point p1,p2;
    float distance;
} Side;

typedef struct polygon {
    Side sides[100];
    float perimeter;
} Polygon;

int input_n();
Point input_point(int x);
void initialize_sides(int n, Polygon p);
float find_distance(Point a, Point b);
void find_perimeter(int n, Polygon p);
void output(Polygon p);

int main(){
  int n = input_n();
  Polygon p;
  initialize_sides(n,p);
}

int input_n(){
  int a;
  printf("Enter a number of sides\n");
  if(scanf("%d", &a)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  return(a);
}

Point input_point(int x){
  Point a;
  printf("Enter the first point x and y of the %d side\n",x);
  if(scanf("%f %f", &a.start_end_x, &a.start_end_y)!=2){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  return(a);
}

void initialize_sides(int n, Polygon p){
  p.sides[0].p1 = input_point(1);
  p.sides[n-1].p2 = p.sides[0].p1;
  for(int i = 1;i<n;i++){
    p.sides[i].p1 = input_point(i+1);
    p.sides[i-1].p2 = p.sides[i].p1;
  }
  for(int i = 0;i<n;i++){
    p.sides[i].distance = find_distance(p.sides[i].p1 , p.sides[i].p2);
  }
  find_perimeter(n,p);
}

float find_distance(Point a, Point b){
  float res = sqrt(pow((b.start_end_x-a.start_end_x),2)+pow((b.start_end_y-a.start_end_y),2));
  return(res);
}

void find_perimeter(int n, Polygon p){
  for(int i = 0;i<n;i++){
    p.perimeter += p.sides[i].distance;
  }
  output(p);
}

void output(Polygon p){
  printf("The perimeter of the polynomial is %f\n", p.perimeter);
}