#include<stdio.h>
#include<math.h>
typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);

int main(){
  Line l = input_line();
  find_length(&l);
  output(l);
}

Point input_point(){
  Point a;
  printf("Enter the point x and y\n");
  scanf("%f %f",&a.x,&a.y);
  return(a);
}

Line input_line(){
  Line b;
  b.p1 = input_point();
  b.p2 = input_point();
  return(b);
}

void find_length(Line *l){
  l->distance = sqrt(pow(((l->p2.x)-(l->p1.x)),2) + pow(((l->p2.y)-(l->p1.y)),2));
}

void output(Line l){
  printf("The distance between the points (%f,%f) and (%f,%f) is %2.4f\n",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}