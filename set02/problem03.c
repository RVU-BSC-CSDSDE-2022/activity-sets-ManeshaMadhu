#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct camel {
	double radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c);
void output(Camel c);

int main(){
  Camel c;
  c = input();
  find_weight(&c);
  output(c);
}

Camel input(){
  Camel a;
  printf("Enter radius\n");
  if(scanf("%lf", &a.radius)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  printf("Enter height\n");
  if(scanf("%lf", &a.height)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  printf("Enter length\n");
  if(scanf("%lf", &a.length)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  return(a);
}

void find_weight(Camel *c){
  double s = sqrt(c->height * c->length);
  c->weight = 3.1415 * c->radius * c->radius * c->radius * s;
}

void output(Camel c){
  printf("The weight of the camel with radius: %2.1lf, height: %2.1lf, length: %2.1lf is %2.4lf\n", c.radius,c.height,c.length,c.weight);
}