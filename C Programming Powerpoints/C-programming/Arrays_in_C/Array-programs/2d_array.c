#include<stdio.h>
#include<conio.h>
void main()
{
int i, j;
int arr[3][3]={ {12, 45, 63},  {89, 34, 73},  {19, 76, 49}};
//clrscr();
printf(":::2D Array Elements:::\n\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",arr[i][j]);
}
printf("\n");
}
getch();
 }
