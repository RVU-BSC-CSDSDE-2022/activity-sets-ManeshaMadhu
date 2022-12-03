#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct point {
  float x;
  float y;
};

typedef struct point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main(){
  Point a,b;
  float res;
  printf("Enter the point x1 and y1\n");
  a = input();
  printf("Enter the point x2 and y2\n");
  b = input();
  dist(a,b, &res);
  output(a,b,res);
}

Point input(){
  Point a;
  if(scanf("%f%f", &a.x, &a.y)!=2){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  return(a);
}

void dist(Point a, Point b, float *res){
  *res = sqrt(pow((b.x-a.x),2)+pow((b.y-a.y),2));
}

void output(Point a, Point b, float res){
  printf("The Distance between (%2.1f,%2.1f) and (%2.1f,%2.1f) is %2.1f\n" ,a.x,a.y,b.x,b.y,res);
}