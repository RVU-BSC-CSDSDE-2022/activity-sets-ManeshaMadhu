#include<stdio.h>
#include<string.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main(){
  char string1[100],string2[100];
  input_two_strings(string1,string2);
  int r = 10;
  r = stringcompare(string1,string2);
  output(string1,string2,r);
}

void input_two_strings(char *string1, char *string2){
  printf("Enter the first string  ");
  scanf("%s", string1);
  printf("Enter the second string  ");
  scanf("%s", string2);
}

int stringcompare(char *string1, char *string2){
  int i = 0,flag = 0;
  for(i = 0;string1[i] != '\0' && string1[i]==string2[i];i++){}
  return(string1[i]-string2[i]);
}

void output(char *string1, char *string2, int result){
  if(result == 0)
  {printf("Both words are equal");}
  else{
    if(result > 0){printf("%s is greater than %s", 
     string1,string2);}
    else{printf("%s is greater than %s", string2,string1);}
  }
}