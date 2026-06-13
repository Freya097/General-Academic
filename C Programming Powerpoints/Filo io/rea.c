#include <stdio.h>
main()
{
FILE *fp;
char buff[100];
fp = fopen("E:/Softwares/C Programming/C power points/Filo io/test.mp3", "r");
fscanf(fp, "%s", buff);
printf("1 : %s\n", buff );
fgets(buff, 255, (FILE*)fp);
printf("2: %s\n", buff );
fgets(buff, 255, (FILE*)fp);
printf("3: %s\n", buff );
fclose(fp);
}
