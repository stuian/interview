# include <stdio.h>
# include <stdlib.h>

int main(void)
{
    int *ptr = NULL;
    int num,i;

    printf("�������¼�������ĸ���:");
    scanf("%d", &num);

    ptr = (int *)malloc(num*sizeof(int));

    for(i=0;i<num;i++)
    {
        printf("�������%d����¼������:",i+1);
        scanf("%d",&ptr[i]);
    }

    printf("��¼��������ǣ�\n");
    for(i=0;i<num;i++)
    {
        printf("%d ",ptr[i]);
    }

    putchar('\n');
    free(ptr);

    return 0;
}
