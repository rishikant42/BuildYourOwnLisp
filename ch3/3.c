#include<stdio.h>

void print(int m);

int main() {
  int n;
  printf("Enter no: ");
  scanf("%d", &n);

  print(n);

  return 0;
}

void print(int m) {
  int i;
  for(i=0;i<m;i++)
    printf("Hello World!\n");
}
