#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct camel {
    float radius, height, length, weight;
};
typedef struct camel Camel;

int getnum();
Camel input(int x);
void input_n_camel(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

int main(){
  int n = getnum();
  float trw = 0.0;
  Camel c[n];
  input_n_camel(n,c, &trw);
}

int getnum(){
  int a;
  printf("Enter the number of camels\n");
  if(scanf("%d", &a)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  return(a);
}

Camel input(int x){
  Camel cl;
  printf("Enter the height of camel no. %d:\n", x+1);
    if(scanf("%f", &cl.height)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
    printf("Enter the length of camel no. %d:\n", x+1);
    if(scanf("%f", &cl.length)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
    printf("Enter the radius of camel no. %d:\n", x+1);
    if(scanf("%f", &cl.radius)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  return(cl);
}

void input_n_camel(int n, Camel c[n], float *truck_weight){
  int i;
  for(i = 0;i<n;i++){
    c[i] = input(i);
  }
  printf("Enter the truck weight\n");
  if(scanf("%f", truck_weight)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  find_camel_weight(n,c);
  float ttw = compute_total_weight(n,c,*truck_weight);
  output(ttw);
}

//weight = pi * stomach_radius^3 * sqrt(height * length)
void find_camel_weight(int n, Camel c[n]){
  int i;
  float sq = 0.0;
  for(i = 0;i<n;i++){
    sq = pow((c[i].height*c[i].length),0.5);
    c[i].weight = (3.14*(pow(c[i].radius,3))*sq);
  }
}

float compute_total_weight(int n, Camel c[n], float truck_weight){
  float sum = 0.0;
  int i;
  for(i = 0;i<n;i++){
    sum = sum+c[i].weight;
  }
  float total_weight = truck_weight+sum;
  return(total_weight);
}

void output(float total_weight){
  printf("The Total weight of the truck is: %.6f\n", total_weight);
}