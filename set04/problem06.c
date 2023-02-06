#include<stdio.h>
#include<stdlib.h>
void input_string(char *a, char *b);
int sub_str_index(char *string, char *substring);
void output(char *string, char *substring, int index);

int main(){
  char a[100],b[100];
  input_string(a,b);
  int index = sub_str_index(a,b);
  output(a,b,index);
}

void input_string(char *a, char *b){
  printf("Enter the string\n");
  if(scanf("%s", a)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
  printf("Enter the substring\n");
  if(scanf("%s", b)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
}

int sub_str_index(char *string, char*substring){
int i,j = 0;
  i = 0;
  while(string[i]!='\0'){
    if(string[i+j]==substring[j]){
      j++;
      if(substring[j]=='\0'){
        return(i);
      }
    }
    else{
      i++;
      j = 0;
    }
  }
}

void output(char *string, char *substring, int index){
  printf("The index of '%s' in '%s' is %d\n",substring,string,index);
}