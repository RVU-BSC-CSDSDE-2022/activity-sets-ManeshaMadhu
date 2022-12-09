#include<stdio.h>
#include<stdlib.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main(){
  char string[100],rev_string[100];
  input_string(string);
  str_reverse(string,rev_string);
  output(string,rev_string);
}

void input_string(char *a){
  printf("Enter the word\n");
  if(scanf("%s", a)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
}

void str_reverse(char *str, char *rev_str){
  int i,j;
  for(i = 0;str[i] != '\0';i++){}
  int l = i;
  for(j = 0;j<i;j++){
    rev_str[j] = str[l-1];
    l-=1;
  }
}

void output(char *a, char *reverse_a){
  printf("The reversed string is %s\n",reverse_a);
}