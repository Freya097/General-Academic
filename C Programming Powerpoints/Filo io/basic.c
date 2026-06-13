#include <stdio.h>
main()
{
FILE *fp;
fp = fopen("E:/Softwares/C Programming/C power points/Filo io/test.mp3", "w+");
fprintf(fp, "This is testing for fprintf...\n");
fputs("This is testing for fputs and i got output...\n", fp);
fclose(fp);
}
