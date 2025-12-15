#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fs,*ft;
   char ch;
   fs=fopen("hi vedhamma.txt","r");
   if(fs==NULL)
   {
   	printf("file does not exit");
   	exit(0);
   }
   ft=fopen("hi.txt","w");
   if(ft==NULL)
   {
   	printf("unable to creat a file");
   	exit(0);
   }
   ch=fgetc(fs);
   while(ch!=EOF)
   {
   	fputc(ch,ft);
   	ch=fgetc(fs);
   	}
   	fclose(fs);
   	fclose(ft);
   	printf("file successfully copied");
   	return 0;
}
