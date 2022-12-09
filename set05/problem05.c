#include<stdio.h>
int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main(){
  int n = input_size();
  int a[n];
  input_array(n,a);
  int index = find_largest_index(n,a);
  output(index);
}

int input_size(){
  int a;
  printf("Enter the size of the array\n");
  scanf("%d", &a);
  return(a);
}

void input_array(int n, int a[n]){
  int i;
  printf("Enter the elements of the array\n");
  for(i = 0;i<n;i++){
    scanf("%d", &a[i]);
  }
}

int find_largest_index(int n, int a[n]){
  int max,i;
  for(int i = 0;i<n-1;i++){
    if(a[i]>a[i+1]){max = i;}
  }
  return(max);
}

void output(int index){
  printf("The index of the largest number in the array is %d\n", index);
}