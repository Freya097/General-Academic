#include <stdio.h>
int main ()
{
int var1=10;
char var2[10];
printf("Address of var1: %d\t%d\n", var1,&var1 );
printf("Address of var2: %x\n", &var2 );
return 0;
}
