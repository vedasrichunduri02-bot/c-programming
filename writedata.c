#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int i=0;
	fp=fopen("WRITE.C","w");
	while(i<20)
	{
		ch=getchar();
		fputc(ch,fp);
	}
	fclose(fp);
	return 0;
}
