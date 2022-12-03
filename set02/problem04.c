#include<stdio.h>
#include<stdlib.h>
void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main()
{
  float r,h,l;
  input_camel_details(&r,&h,&l);
  int m = find_mood(r,h,l);
  output(r,h,l,m);
}

void input_camel_details(float *radius, float *height, float *length){
  printf("Enter radius: ");
  if(scanf("%f", radius)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  printf("Enter height: ");
  if(scanf("%f", height)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  printf("Enter length: ");
  if(scanf("%f", length)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
}

int find_mood(float radius, float height, float length){
  if(radius<height&&radius<length){
    return(0);
  }
  else if(height<length&&height<radius){
    return(1);
  }
  else{
    return(10);
  }
}

void output(float radius, float height, float length, int mood){
  if(mood == 0){printf("The Camel is Sick\n");}
  if(mood == 1){printf("The Camel is Happy\n");}
  if(mood == 10){printf("The Camel is Tense\n");}
}