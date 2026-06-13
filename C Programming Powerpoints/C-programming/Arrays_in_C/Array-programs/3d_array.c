#include<stdio.h>
 /*
 #include<conio.h>
 void main()
 {
 int i, j, k, x=1;
 int arr[3][3][3];
 //clrscr();
printf(":::3D Array Elements:::\n\n");

 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 for(k=0;k<3;k++)
 {
 arr[i][j][k] = x;
 printf("%d\t",arr[i][j][k]);
 x++;
 }
printf("\n");
}
 printf("\n");
}
getch();
}
*/

#include <stdio.h>
int main ()
{
/* an array with 5 rows and 2 columns*/
int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
int i, j;
/* output each array element's value */
for ( i = 0; i < 5; i++ )
{
for ( j = 0; j < 2; j++ )
{
printf("a[%d][%d] = %d\n", i,j, a[i][j] );
}
}
return 0;
}
