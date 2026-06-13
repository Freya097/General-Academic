#include <stdio.h>
int j, k;
int *ptr;
int main(void)
{
j = 1;
k = 50;
ptr = &k;
*ptr=100;
printf("\n");
printf("j has the value %d and is stored at %d\n", j, &j);
printf("k has the value %d and is stored at %d\n", k, &k);
printf("ptr has the value %d and is stored at %d\n", ptr, &ptr);
printf("The value of the integer pointed to by ptr is %d\n", *ptr);
printf("The value of the integer pointed to by ptr is %d\n", k);
printf("The value of the integer pointed to by ptr is %d\n", ++*ptr);

printf("The value of the integer pointed to by ptr is %d\n", k);
return 0;
}

