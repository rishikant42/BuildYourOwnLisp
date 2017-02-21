#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define MIN(a, b) a<b?a:b
#define MAX(a, b) a>b?a:b

int expo(int m, int n);

int main() {
  int a = 10;
  int b = 6;

  printf("%d mod %d = %d\n", a, b, a % b);

  int m = 2;
  int n = 10;

  printf("%d ^ %d = %d\n", m, n, expo(m, n));
  printf("3 ^ 4 = %f\n", pow(3, 4));
  printf("Min of 1, 5 = %d\n", MIN(1, 5));
  printf("Max of 1, 5 = %d\n", MAX(1, 5));

  return 0;
}

int expo(int m, int n) {
  int i;
  int res = 1;
  for(i=1;i<=n;i++)
    res = res*m;

  return res;
}
