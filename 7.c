#include<stdio.h>
int main()
{
  int a = 19, b = 27;
  a += b+++a--;
  b = b--+ ++a;
  printf("%d%d", a, b);
}
