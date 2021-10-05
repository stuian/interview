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

int main(void)
{
    struct Book *pt;
    pt = &book;

    printf("����:%s\n",book.title);
    printf("����:%s\n",book.author);
    printf("�۸�:%.2f\n",book.price);
    printf("����:%d-%d-%d\n",book.date.year,book.date.month,book.date.day);
    printf("������:%s\n",book.publisher);

    # ָ�����1
    printf("����:%s\n",(*pt).title);
    printf("����:%s\n",(*pt).author);
    printf("�۸�:%.2f\n",(*pt).price);
    printf("����:%d-%d-%d\n",(*pt).date.year,(*pt).date.month,(*pt).date.day);
    printf("������:%s\n",(*pt).publisher);

    # ָ�����1
    printf("����:%s\n",pt->title);
    printf("����:%s\n",pt->author);
    printf("�۸�:%.2f\n",pt->price);
    printf("����:%d-%d-%d\n",pt->date.year,pt->date.month,pt->date.day);
    printf("������:%s\n",pt->publisher);


    return 0;

}
