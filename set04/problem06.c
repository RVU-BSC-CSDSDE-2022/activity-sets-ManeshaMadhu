#include<stdio.h>
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
  scanf("%s", a);
  printf("Enter the substring\n");
  scanf("%s", b);
}

int sub_str_index(char *string, char*substring){
int i,l,j,c;
  for(i = 0;substring[i]!='\0';i++){}
  l = i;
  for(i = 0;string[i]!= '\0';i++){
    if(string[i] == substring[0]){
      c = 1;
      for(j = 1;j<l;j++){
        if(string[i+j] == substring[j]){c += 1;}
      }
    }
    if(c == l){break;}
  }
  if(c == l){return(i);}
  else{return(0);}
}

void output(char *string, char *substring, int index){
  printf("The index of '%s' in '%s' is %d\n",substring,string,index);
}