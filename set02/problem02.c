#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main(){
  float r,h,l,w;
  input_camel_details(&r, &h, &l);
  w = find_weight(r,h,l);
  output(r,h,l,w);
}

void input_camel_details(float *radius, float *height, float *length){
  printf("Enter radius\n");
  if(scanf("%f", radius)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  printf("Enter height\n");
  if(scanf("%f", height)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  printf("Enter length\n");
  if(scanf("%f", length)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
}

float find_weight(float radius, float height, float length){
  float s = sqrt(height * length);
  float weight = 3.1415 * radius * radius * radius * s;
  return(weight);
}

void output(float radius, float height, float length, float weight){
  printf("The weight of the camel with radius: %2.1f, height: %2.1f, length: %2.1f is %2.4f\n", radius,height,length,weight);
}