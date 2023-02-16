#include <stdio.h>
#include <stdlib.h>
static int compar(const void *e1, const void *e2){
  return *(int*)e1 - *(int*)e2;
}
int main(void){
  int num[]={1, 2, 3, 4, 5, 4, 3, 2, 1};
  qsort(num, numsSize, sizeof(int), compar);
  return 0;
}
