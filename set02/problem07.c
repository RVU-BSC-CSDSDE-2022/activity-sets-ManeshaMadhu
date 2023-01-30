#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main(){
  char n[100];
  input(n);
  int r;
  r = has_nice_name(n);
  output(r);
}

void input(char *name){
  printf("Enter a name for the camel\n");
  if(scanf("%s", name)!=1){
    printf("Error in user input system can't continue\n");
    exit(0);
  }
}

int has_nice_name(char *c){
  int v = 0,ct = 0,i;
  int l = strlen(c);
  for(i = 0;i<l;i++){
    c[i] = tolower(c[i]);
    if((c[i] == 'a')||(c[i] == 'e')||(c[i] == 'i')||(c[i] == 'o')||(c[i] == 'u')){
      v++;
    }
    else{
      ct++;
    }
  }
  if((v>=2)&&(ct>=2)){return(1);}
  else{return(0);}
}

void output(int res){
  if(res == 1){printf("The camel has a nice name");}
  else{printf("The camel dose not have a nice name");}
}