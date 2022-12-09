#include<stdio.h>
typedef struct point {
    float start_end_x, start_end_y;
} Point;

typedef struct line {
    Point p;
    float distance;
} Line;

typedef struct polygon {
    int sides;
    Line l[100];
    float perimeter;
} Polygon;

int input_n();
Line input_line(int n);
void input_n_lines(int n, Line *l);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_n_distance(int n, Line *l);
void find_perimeter(Polygon* p);
void output(Polygon p);

int main(){
  int n = input_n();
}

int input_n(){
  int a;
  printf("Enter the number of lines in a polygon");
  scanf("%d", &a);
  return(a);
}

Line input_line(int n){
  Line x;
  printf("Enter the coordinates of point %d (x,y):\n",n+1);
  scanf("%f %f",&x.p.start_end_x,&x.p.start_end_y);
  return(x);
}

void input_n_lines(int n, Line *l){
  int i;
  for(i = 0;i<n;i++){
    printf("Enter the coordinates of point %d (x,y):\n",n);
    l = input_line(n);
  }
}

int input_polygon(Polygon *p){
  
}

float find_distance(Point a, Point b)

void find_n_distance(int n, Line *l)

void find_perimeter(Polygon* p)

void output(Polygon p)