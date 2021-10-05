# include <stdio.h>

void hanoi(int n,char x,char y,char z);

void hanoi(int n,char x,char y,char z)
{
    if(n==1)
    {
        printf("%c-->%c\n",x,z);
    }
    else
    {
        hanoi(n-1,x,y,z); //��n-1����x��y
        printf("%c-->%c\n",x,z);
        hanoi(n-1,y,z,x); //��n-1����y��z
    }
}

int main(void)
{
    int n;
    printf("�����뺺ŵ���Ĳ���:");
    scanf("%d",&n);

    hanoi(n,'X','Y','Z');

    return 0;
}
