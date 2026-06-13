#include <stdio.h>
int j, k;
int *ptr;
int main(void)
{
j = 2;
k = 2 ;
ptr = &k;
//printf("\n");
printf("j has the value %d and is stored at %d\n", j, &j);
printf("k has the value %d and is stored at %d\n", k, &k);
printf("ptr has the value %d and is stored at %d\n", &ptr, *ptr);
return 0;
}
