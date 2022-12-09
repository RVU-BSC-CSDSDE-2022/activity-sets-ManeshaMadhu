#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main(){
  float x1,x2,x3,y1,y2,y3;
  int result;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  result = is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,result);
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
  printf("Enter the first x and y point of the triangle\n");
  scanf("%f %f",x1,y1);
  printf("Enter the second x and y point of the triangle\n");
  scanf("%f %f",x2,y2);
  printf("Enter the third x and y point of the triangle\n");
  scanf("%f %f",x3,y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
  if(((x1!=x2 || y1!=y2)&&(x2!=x3 || y2!=y3)&&(x1!=x3 || y1!=y3))||(x1 == x2 == x3)||(y1 == y2 == y3)){
    return(1);
  }
  else{
    return(0);
  }
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result){
  if(result == 1){
    printf("The points (%2.1f, %2.1f), (%2.1f, %2.1f) and (%2.1f, %2.1f) form a triangle\n",x1,y1,x2,y2,x3,y3);
  }
  else{
    printf("The points (%2.1f, %2.1f), (%2.1f, %2.1f) and (%2.1f, %2.1f) do not form a triangle\n",x1,y1,x2,y2,x3,y3);
  }
}