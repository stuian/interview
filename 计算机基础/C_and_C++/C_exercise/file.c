# include <stdio.h>
# include <stdlib.h>

int main()
{
    FILE *fp1;
    FILE *fp2;
    int ch;

    if((fp1=fopen("hello.txt","r"))== NULL)
    {
        printf("�ļ���ʧ��!\n");
        exit(EXIT_FAILURE);
    }
    if((fp2=fopen("world.txt","w"))== NULL)
    {
        printf("�ļ���ʧ��!\n");
        exit(EXIT_FAILURE);
    }
    while((ch=fgetc(fp1))!= EOF)
    {
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}
