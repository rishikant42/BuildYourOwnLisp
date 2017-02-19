#include<stdio.h>
#include<string.h>

int main() {
  char* a = "helloWorld";
  char* b = "ll";

  printf("%s\n",strstr(a,b));
  return 0;
}
