#include <stdio.h>
#define message_for(a, b) \
printf(#a " and " #b ": Welcome Here\n");
int main(void)
{
message_for(Charlie, Jack);
return 0;
}
