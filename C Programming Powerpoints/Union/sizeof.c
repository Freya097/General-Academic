#include <stdio.h>
#include <string.h>
union Data {
int i;
float f;
char str[40]; };
int main( )
{
    int j;
union Data data;
printf( "Union Memory size occupied by data : %d\n", sizeof(data));
printf( "inside main Function Memory size integer size : %d\n", sizeof(j));
return 0;
}
