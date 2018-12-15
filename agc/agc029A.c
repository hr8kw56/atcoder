#include<stdio.h>
#include<string.h>

#define MAX 200001

void run(){
  char S[MAX];
  scanf(" %s", S);
  signed long long int len = strlen(S);
  char *a = S;
  long long int n = -1, cnt = 0, ans = 0;
  while(n!=len-1){
    while(a[++n] == 'B' && n != len-1) cnt++;
    if(a[n] == 'W') ans += cnt;
  }
  printf("%lld\n", ans);
}


int main(){
  run();
  return 0;
}
