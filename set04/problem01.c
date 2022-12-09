#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main(){
  float x1,y1,x2,y2,distance;
  input(&x1,&y1,&x2,&y2);
  distance = find_distance(x1,y1,x2,y2);
  output(x1,y1,x2,y2,distance);
}

void input(float *x1, float *y1, float *x2, float *y2){
  printf("Enter the first x and y point\n");
  scanf("%f %f",x1,y1);
  printf("Enter the second x and y point\n");
  scanf("%f %f",x2,y2);
}

float find_distance(float x1, float y1, float x2, float y2){
  float res = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
  return(res);
}

void output(float x1, float y1, float x2, float y2, float distance){
  printf("The distance between point (%f, %f) and (%f, %f) is %2.4f\n",x1,y1,x2,y2,distance);
}