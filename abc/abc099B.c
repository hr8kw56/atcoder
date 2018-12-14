#include<stdio.h>

int main(){
  int a, b;
  scanf("%d%d", &a, &b);
  int s = b - a;
  int i, j;
  for(i = 1, j = 1; j < s; i +=(++j)){
  }
  printf("%d\n", i - b);
  return 0;
}
