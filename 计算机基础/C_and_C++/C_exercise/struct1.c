# include <stdio.h>

struct Date
{
    int year;
    int month;
    int day;
};

struct Book
{
    char title[128];
    char author[40];
    float price;
    struct Date date;
    char publisher[40];
} book = {
    "����ѧc�����",
    "С����",
    48.8,
    {
        2017,11,11
    },
    "�廪��ѧ������"
};

int main()
{
//    printf("������������");
//    scanf("%s",book.title);
//    printf("���������ߣ�");
//    scanf("%s",book.author);
//    printf("������۸�");
//    scanf("%f",&book.price);
//    printf("������������ڣ�");
//    scanf("%d",&book.date);
//    printf("����������磺");
//    scanf("%s",book.publisher);

//    printf("\n--¼����ɣ�--\n");
    printf("����:%s\n",book.title);
    printf("����:%s\n",book.author);
    printf("�۸�:%.2f\n",book.price);
    printf("����:%d-%d-%d\n",book.date.year,book.date.month,book.date.day);
    printf("������:%s\n",book.publisher);

    return 0;
}
