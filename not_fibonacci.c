#include<stdio.h>

static int fib(int n)
{
    if (n == 0 || n == 1) return 1;
        
    int r=0, p=1, pp=1;
        
    for (int i = 2; i <= n; i++) {
        r = p - pp;
        pp = p;
        p = r;
    }
    return r;
}

int main() {
  for (int i = 0; i < 10; i++) {
     printf("%d: %d\n", i, fib(i));
  }
  return 0;
}
