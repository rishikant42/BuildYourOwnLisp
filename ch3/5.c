#include<stdio.h>

int main() {
  int i;

  while(1) {
    scanf("%d", &i);

    switch(i) {
      case 1:
        printf("The enter value is 1\n");
        break;

      case 2:
      case 3:
        printf("The enter value is either 2 or 3\n");
        break;

      case 4:
        printf("The enter value is 4\n");
        break;

      default:
        printf("Invalid arg\n");
    }

  }

  return 0;
}
