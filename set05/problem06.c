#include<stdio.h>
#include<stdlib.h>
void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main(){
  char a[100];
  input_string(a);
  int no_words = count_words(a);
  output(a,no_words);
}

void input_string(char *a){
  printf("Enter the sentence\n");
  if(scanf("%[^\n]s", a)!=1){
    printf("Error in user input system can't continue");
    exit(0);
  }
}

int count_words(char *string){
  int i,c = 0;
  for(i = 0;string[i]!='\0';i++){
    if(string[i] == ' '){
      c++;
    }
  }
  return(c+1);
}

void output(char *string, int no_words){
  printf("The number of words in '%s' is %d\n",string,no_words);
}