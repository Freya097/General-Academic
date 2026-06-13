#include <stdio.h>
int main ()
{
int var;
int  *ptr;
int  **pptr;
var = 3000;
// take the address of var
ptr = &var;
// take the address of ptr using address of operator &
pptr = &ptr;
// take the value using pptr
printf("Value of var = %d \n", var );
printf("Value available at \t %d *ptr = %d\n",&ptr, *ptr );
printf("Value available at **pptr = %d\t %d\n",&var, **pptr);

printf("Value available at **pptr = %d\t %d\n",&var, &pptr);

printf("Address is stored the memory byte is %d",sizeof(*pptr));
return 0;
}
