#include<stdio.h>
#include<string.h>

int main() {
   char str[100], temp,strRev[100];
   int i, j = 0,*ptr,len,*ptrRev;
    ptr=&str[0];
    ptrRev=&strRev;
   printf("\nEnter the string :");
   gets(str);
   len=strlen(str);
   for(i=0;i<len;i++)
   {
       printf("%c",*ptr);
       ptr=ptr+i;
   }
   for(i=0;i<len;i++)
   {
    ptr--;
    ptrRev=ptr;
    ptrRev++;
   }
   for(i=0;i<len;i++)
   {
      printf("%c",strRev);
   }
   return (0);
}
