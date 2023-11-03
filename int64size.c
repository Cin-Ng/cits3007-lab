#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

enum day { SUN, MON, TUE, WED, THU, FRI, SAT };

void swap(int * pa, int *pb){
    int a = *pb;
    *pb = *pa;
    *pa = a;
}

/*the main function*/
int main() {
  int64_t x = 0;
  char c = 'a';
  long long d = 1;
  printf("%zd\n", sizeof(x));
  printf("%zd\n", sizeof(c));
  printf("%zd\n", sizeof(d));

  int a = 77;
  int b = 7777;
  swap(&a, &b);

  printf("%d, %d\n", a , b);
  
  enum day myday = MON;
  myday = 294967287;
  printf("%d\n", myday);
}
